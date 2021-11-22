`timescale 1ns / 1ps

module KGP_RISC(
		input clk,
		input reset,
		output [15:0] rout
    );

wire PCSrcIn,PCSRc;        //to decide if we need to choose external NPC or incremented PC
wire [9:0] exNPCIn,exNPC;  //external NPC (coming from branch statements)
wire [9:0] npc,pc,npc_mux;  //Parts of instruction fetch

//Various Parameters of the instruction decoder
wire [2:0] opcode; 
wire [4:0] rsAddr,rtAddr,shamt,wrAddr;
wire [9:0] if_id_NPC;
wire [31:0] if_id_instr; 
wire [3:0] fcode;
wire [21:0] imm;
wire [24:0] label;
wire clk1,clk2;

//RegWrite: To decide if we need to write in register
wire RegWrite;

//Data corresponding to rsAddr, rtAddr
wire [31:0] rsData,rtData,wrData;

//dout: output of Instuction_Memory, ra: return address
wire [31:0] dout,ra;

//To decide if we need to write in memory
wire MemWrite;

//Various flags
wire carryflag,zeroflag,signflag;

//ALU parameters
wire [31:0] ALUOut,input1,input2;

//MemOut: Data loaded, MemAddr: Address in Memory
wire [31:0] MemOut;
wire [31:0] MemAddrFull;
wire [9:0] MemAddr;

clockDivide CD(clk,clk1,clk2);

//Instruction fetch module: Combination of 5 top modules
mux M(npc,exNPC,PCSrc,npc_mux);    //Choose out of npc and external npc
PC P1(clk1,npc_mux,pc);            //make it pc at clk

test_inst_bram IMEM(           //extract instruction
  .clka(clk2), 
  .addra(pc), 
  .douta(dout)
  ); 

IF_ID if_id(reset,clk1,dout,npc,if_id_instr,if_id_NPC);   //make it output at clk
PC_incrementor I(pc,npc);          //increment

//Instruction Decoder, input as instruction, output as various parameters of instruction
InstDecode I_D(
	 .inst(if_id_instr),
	 .opcode(opcode),
	 .rsAddr(rsAddr),
	 .rtAddr(rtAddr),
	 .shamt(shamt),
	 .func(fcode),
	 .imm(imm),
	 .label(label),
	 .MemWrite(MemWrite)
	 );

//Register File 32 x 32, can read from two registers and write into one register at a time
regFile32x32 RF (
	 .reset(reset),
    .clk(clk1), 
    .RegWrite(RegWrite), 
    .wrAddr(wrAddr), 
    .wrData(wrData), 
    .rdAddrA(rsAddr), 
    .rdDataA(rsData), 
    .rdAddrB(rtAddr), 
    .rdDataB(rtData),
	 .rout(rout)
    );

//Get the Address from Memory where we need to load/store
assign MemAddrFull = rsData+imm ;	 
assign MemAddr = MemAddrFull[9:0];

//Assign inputs assigns values to the two inputs of the ALU based on the opcode and fcode
assignInputs a_i (
    .rs(rsData), 
    .rt(rtData), 
    .shamt(shamt), 
    .imm(imm), 
    .opcode(opcode), 
    .fcode(fcode), 
    .input1(input1), 
    .input2(input2)
    ); 

//given two inputs, opcode and fcode, ALU gives the output and updates flags	 
ALU alu(
    .input1(input1), 
    .input2(input2), 
    .opcode(opcode), 
    .fcode(fcode), 
    .out(ALUOut),
    .carryFlag(carryflag), 
    .zeroflag(zeroflag), 
    .signFlag(signflag)
    );

//given the opcode, fcode, labels and flags, branch gives the new exNPC where we need to jump and updates PCSrc
branch b (
    .opcode(opcode), 
    .fcode(fcode), 
    .label(label), 
    .carryflag(carryflag), 
    .zeroflag(zeroflag),  
    .signflag(signflag), 
    .PC(if_id_NPC), 
    .exNPC(exNPC), 
    .PCSrc(PCSrc), 
    .ra(ra)
    );

//WriteAddress decides if we need to write something
//if yes, what and where based on opcode and fcode
//there are multiple options to write like ALUOut (Arithmetic and shift op)
//ra (call a function case) and MemOut(load case)
writeAddress wa (
    .opcode(opcode), 
    .fcode(fcode), 
    .rsAddr(rsAddr), 
    .ALUOut(ALUOut), 
    .ra(ra), 
	 .MemOut(MemOut),
    .wrAddr(wrAddr), 
    .RegWrite(RegWrite), 
    .wrData(wrData)
    );

//Data Block RAM 
test_data_bram dm (
  .clka(clk2), 
  .wea(MemWrite), 
  .addra(MemAddr),
  .dina(rtData),
  .douta(MemOut) 
);

endmodule


module PC_incrementor(
    input [9:0] pc_in,
    output [9:0] pc_out
    );

assign pc_out = pc_in+10'b1;  //simply add 1

endmodule


module clockDivide(
    input clk,
    output reg clk1,
    output reg clk2
    );

reg [3:0] counter1;

initial begin
	counter1=0;
	clk1=0;
	clk2=0;
	end
always @(clk)
	begin
	if(counter1 != 4'd8)
		begin
		counter1=counter1+1'b1;
		end
	else
		begin
			counter1=0;
			clk1=!clk1;
		end
	end

always @(clk)
	begin
		clk2=!clk2;
	end
	
endmodule

