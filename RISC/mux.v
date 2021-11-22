`timescale 1ns / 1ps

module mux(
    input [9:0] in0,
    input [9:0] in1,
    input sel,
    output reg [9:0] out
    );

// assign out=sel?in1:in0;   //if sel is 1, choose inp1 else choose inp2

    always @(*)
        
        begin
            if(sel == 0)
                begin
                    out <= in0 ; 
                end
            else
                begin
                    out <= in1 ; 
                end

        end

endmodule