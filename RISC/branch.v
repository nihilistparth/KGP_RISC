`timescale 1ns / 1ps


module branch(
    input [2:0] opcode,
    input [3:0] fcode,
	input [24:0] label,
    input carryflag,
    input zeroflag,
    input signflag,
	input [9:0] PC,
    output reg [9:0] exNPC,
	output reg PCSrc,
	output reg [31:0] ra
    );
	
initial begin
	exNPC<=0;
	PCSrc<=0;
	ra<=0;
	end
always @(opcode or fcode or label or carryflag or zeroflag or signflag)
	begin
	ra<=0;    //ra is 0 by default
		if(opcode==3'b011)     //if we are branching
			begin
				if(fcode==4'b0)
							begin       //b
								exNPC<=label[9:0];
								PCSrc<=1;
							end
				else if(fcode==4'b0001)
						  begin       //bz
								if(zeroflag==1) 
									begin
										exNPC<=label[9:0];
										PCSrc<=1;
									end
								else 
									begin
									PCSrc<=0;
									exNPC<=0;
									end
							end
				else if(fcode==4'd2)
						  begin		//bnz
								if(zeroflag==0) 
									begin
										exNPC<=label[9:0];
										PCSrc<=1;
									end
								else 
									begin
									PCSrc<=0;
									exNPC<=0;
									end
							end
				else if(fcode==4'd3)
						  begin		//bcy
								if(carryflag==1) 
									begin
										exNPC<=label[9:0];
										PCSrc<=1;
									end
								else 
									begin
									PCSrc<=0;
									exNPC<=0;
									end
							end
				else if(fcode==4'd4)
						  begin		//bncy
								if(carryflag==0) 
									begin
										exNPC<=label[9:0];
										PCSrc<=1;
									end
								else 
									begin
									PCSrc<=0;
									exNPC<=0;
									end
							end
				else if(fcode==4'd5)
						  begin		//bs
								if(signflag==1) 
									begin
										exNPC<=label[9:0];
										PCSrc<=1;
									end
								else 
									begin
									PCSrc<=0;
									exNPC<=0;
									end
							end
				else if(fcode==4'd6)
						  begin	//bns
								if(signflag==0) 
									begin
										exNPC<=label[9:0];
										PCSrc<=1;
									end
								else 
									begin
									PCSrc<=0;
									exNPC<=0;
									end
							end
				else if(fcode==4'd7)
						  begin	//bv
								
							exNPC<=label[9:0];
							PCSrc<=1;
								
							end
				else if(fcode==4'd8)
						  begin	//bnv
								
							exNPC<=label[9:0];
							PCSrc<=1;
								
							end
				else if(fcode==4'd9)
						  begin		//call
								exNPC<=label[9:0];
								PCSrc<=1;
								ra<=PC;   //Store the PC 
							end
				else if(fcode==4'd10)
						  begin //return
								exNPC<=ra[9:0];
								PCSrc<=1;
							end
				else    
							begin //default case
								PCSrc<=0;
								exNPC<=0;
							end
			end
			
			else if(opcode==3'b100)
				begin
				exNPC<=label[9:0];
				PCSrc<=1;
				end
			
			// change start
			else if(opcode == 3'b101)
				begin
				// branch on rs less than 0 
				if(fcode == 4'd0)
					begin
						if(signflag)
							begin
								exNPC<=label[9:0];
								PCSrc<=1;
							end
						else
							begin
								PCSrc<=0;
								exNPC<=0;
							end
					end
				// branch on rs zero
				else if(fcode == 4'd1)
					begin
						if(zeroflag)
							begin
								exNPC<=label[9:0];
								PCSrc<=1;
							end
						else
							begin
								PCSrc<=0;
								exNPC<=0;
							end
					end
				// branch on rs not zero
				else if(fcode == 4'd2)
					begin
						if(~zeroflag)
							begin
								exNPC<=label[9:0];
								PCSrc<=1;
							end
						else
							begin
								PCSrc<=0;
								exNPC<=0;
							end
					end
				// change end
				else
					begin
						PCSrc<=0;
						exNPC<=0;
					end
				
				end
			else
				begin
					PCSrc<=0;
					exNPC<=0;
				end
		end
endmodule
