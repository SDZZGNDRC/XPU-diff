//该模块实现了130位的保留进位加法器

module CSAdder130 (
    input wire[129:0] a,
    input wire[129:0] b,
    input wire[129:0] c,

    output wire[129:0] result1,
    output wire[129:0] result2
);
/* verilator lint_off UNUSED */
wire[129:0] temp1;
wire[129:0] temp2;

FullAdder130 full_adder130(
    .a(a),
    .b(b),
    .cin(c),

    .cout(temp1),
    .s(temp2)
);

assign result1 = {temp1[128:0], 1'd0};
/* verilator lint_on UNUSED */
assign result2 = temp2;

endmodule
