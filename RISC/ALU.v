`timescale 1ns / 1ps


module ALU(
    input [31:0] input1,
    input [31:0] input2,
	input [2:0] opcode,
    input [3:0] fcode,
    output reg [31:0] out,
	output reg carryFlag,
	output reg zeroflag,
	output reg signFlag
	// output reg overflowFlag
    );

	wire [31:0] ip1,ip2;
	assign ip1 = input1;
	assign ip2 = input2;
    
    wire [31:0]adder_result_w;
    wire carry_w;
    hybridAdder h (.a(ip1),.b(ip2), .c_in(0) , .c_out(carry_w), .S(adder_result_w) );

	reg c31,c32;

always @(*)
	begin
		case(opcode) 
			3'b000: begin              //R Type arithmetic and shift instructions
						case(fcode)
						
						4'b0000: begin     //xor
									out=input1^input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end
						
						4'b0001:	begin 	//and
									out=input1&input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end 
						
						4'b0010:	begin		//comp
									out = ~input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									{c31, out[31:0]} = out[31:0] + 1'b1 ; 
									signFlag=out[31];
									
									end
						4'b0011:	begin		//add
									// {c31,out[30:0]}=input1[30:0]+input2[30:0];
									// {c32,out[31]}=input1[31]+input2[31]+c31;
									// overflowFlag=c31^c32;

									// carryFlag=c32;
									out = adder_result_w ; 
									carryFlag = carry_w ;
									//overflowFlag = adder_result_w[31] ^ carry_w ;  

									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end 
						4'b0100:	begin		//shll
									out=input1<<input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end
						4'b0101:	begin		//shrl
									out=input1>>input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end
						4'b0110:	begin		//shllv
									out=input1<<input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end	
						4'b0111:	begin		//shrlv
									out=input1>>input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end	
						4'b1000:	begin		//shra
									out=input1>>>input2;
									//overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end	
						4'b1001:	begin		//shrav
									out=input1>>>input2;
									// overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end	
						endcase
				end
				
			 3'b001:
				begin
					case(fcode)            //Immediate type instructions
						4'b0000:	begin
									out=~input2;      //compi
									//overflowFlag=1'b0;
									carryFlag=1'b0;
									zeroflag=(out==0)?1'b1:1'b0;
									{c31, out[31:0]} = out[31:0] + 1'b1 ; 
									signFlag=out[31];
									
									end
						4'b0001:	begin				//addi
									// {c31,out[30:0]}=input1[30:0]+input2[30:0];
									// {c32,out[31]}=input1[31]+input2[31]+c31;
									// overflowFlag=c31^c32;
									// carryFlag=c32;
									out = adder_result_w ; 
									carryFlag = carry_w ;
									//overflowFlag = adder_result_w[31] ^ carry_w ;  
									zeroflag=(out==0)?1'b1:1'b0;
									signFlag=out[31];
									end 
					endcase
				end
				
			3'b101:
				begin
					case(fcode)	
						4'd0:	begin
								signFlag = input1[31] ;
								zeroflag = (input1 == 0) ? 1'b1:1'b0 ; 
								out = 0 ; 
								end
						4'd1:	begin
								signFlag = input1[31] ;
								zeroflag = (input1 == 0) ? 1'b1:1'b0 ; 
								out = 0 ; 
								end
						4'd2:	begin
								signFlag = input1[31] ;
								zeroflag = (input1 == 0) ? 1'b1:1'b0 ;
								out = 0 ;  
								end
					endcase
				end
				
				
				
			default:                //default: keep everything 0
						begin
						out=0;
						end
		endcase
	end
endmodule
