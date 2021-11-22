`timescale 1ns / 1ps

module assignInputs(
		input [31:0] rs,
		input [31:0] rt,
		input [4:0] shamt,
		input [21:0] imm,
		input [2:0] opcode,
		input [3:0] fcode,
		output reg [31:0] input1,
		output reg [31:0] input2
    );

always @(*)
	begin
		if(opcode==3'b0)
			begin     //for various arithmetic and shift operations involving 2 reg 
				if(fcode==4'd0 | fcode==4'd1 | fcode==4'd2 | fcode==4'd3 | fcode==4'd6 | fcode==4'd7 | fcode==4'd9)
					begin
					input1<=rs;
					input2<=rt;
					end
				else   //involving 1 reg and shamt
					begin
					input1<=rs;
					input2<={27'b0,shamt};
					end
			end
		else if(opcode==3'd1)     //immediate operations
			begin
				input1<=rs;
				if(imm[21] == 1'b1)
					input2 <= {10'b1111111111,imm};
				else input2 <= {10'b0,imm};
			end
			
		else if(opcode == 3'd4 | opcode == 3'd5)
			begin
				input1 <= rs ; 
				input2 <= 0 ; 
			end	
		
		else                 //Otherwise not a work of ALU
			begin
				input1<=0;
				input2<=0;
			end
	end

endmodule
