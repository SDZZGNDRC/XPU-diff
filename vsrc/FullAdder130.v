module FullAdder130 (
    input wire[129:0] a,
    input wire[129:0] b,
    input wire[129:0] cin,

    output wire[129:0] cout,
    output wire[129:0] s 
);

genvar i;
generate for(i = 0; i < 130; i = i+1)
    begin : gfor
        assign {cout[i], s[i]} = a[i] + b[i] + cin[i];
    end
endgenerate

endmodule
