`timescale 1ns / 1ps

module signExtend(
    input [15:0] in,
    output [31:0] out
    );

assign out[31:16]={16{in[15]}};
assign out[15:0]=in;

endmodule
