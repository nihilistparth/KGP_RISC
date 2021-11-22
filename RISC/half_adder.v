`timescale 1ns / 1ps

module half_adder(
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum,
    output cout
    );

assign {cout,sum}=a+b;

endmodule
