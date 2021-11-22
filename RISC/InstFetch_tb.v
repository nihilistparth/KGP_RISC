`timescale 1ns / 1ps


module InstFetch_tb;

	// Inputs
	reg PCSrc;
	reg clk;
	reg [9:0] Ex_NPC;

	// Outputs
	wire [31:0] if_id_instr;
	wire [9:0] if_id_NPC;

	// Instantiate the Unit Under Test (UUT)
	InstFetch uut (
		.PCSrc(PCSrc), 
		.clk(clk), 
		.Ex_NPC(Ex_NPC), 
		.if_id_instr(if_id_instr), 
		.if_id_NPC(if_id_NPC)
	);

	initial begin
		// Initialize Inputs
		PCSrc = 0;
		clk = 0;
		Ex_NPC = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always
		#10 clk=!clk;
endmodule

