// 该模块用于生成2位Booth编码的部分积
module Booth2 (
    input wire[2:0] op2_slice,
    input wire[129:0] op1,

    output wire[129:0] p
);

parameter L = 0;

wire[129:0] zero;
wire[129:0] p1; // +[op1]
wire[129:0] p2; // +2[op1]
wire[129:0] p3; // -[op1]
wire[129:0] p4; // -2[op1]
/* verilator lint_off UNUSED */
wire[129:0] temp;

assign zero = 130'd0;
assign p1 = op1;
assign p2 = {op1[128:0], 1'b0};
assign p3 = ~op1 + 1'b1;
assign p4 = {p3[128:0], 1'b0};

assign temp = ({130{op2_slice == 3'd0}} & zero)
            | ({130{op2_slice == 3'd1}} & p1)
            | ({130{op2_slice == 3'd2}} & p1)
            | ({130{op2_slice == 3'd3}} & p2)
            | ({130{op2_slice == 3'd4}} & p4)
            | ({130{op2_slice == 3'd5}} & p3)
            | ({130{op2_slice == 3'd6}} & p3)
            | ({130{op2_slice == 3'd7}} & zero);

assign p = {temp[129-L:0], {L{1'd0}}};
/* verilator lint_on UNUSED */
endmodule
