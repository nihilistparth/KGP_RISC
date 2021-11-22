`timescale 1ns / 1ps

module DFF_tb;

	// Inputs
	reg [31:0] D;
	reg clk;
	reg clr;

	// Outputs
	wire [31:0] Q;

	// Instantiate the Unit Under Test (UUT)
	DFF uut (
		.D(D), 
		.clk(clk), 
		.clr(clr), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		D = 0;
		clk = 1;
		clr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		D=32'd10;
		
		#20
		clr=1;
		D=32'd69;
		
		#20
		D=32'd30;
		
		#20
		clr=0;
		D=32'd17;
		
		#20
		clr=0;
		D=32'd0;
	end
	
	always 
		#10 clk=!clk;
      
endmodule

