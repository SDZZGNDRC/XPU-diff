module MULDIV (
    input wire                  clk,
    input wire                  rst,
    
    input wire                  mul_en,
    input wire                  req_valid_i,
    input wire[`RegBus]         op_1_i, 
    input wire[`RegBus]         op_2_i, 
    input wire                  sign_op_1_i,
    input wire                  sign_op_2_i,
    input wire[`CTRL_Wire_Bus]  ctrl_signal_i,

    output wire[`RegBus]        data_1_o,
    output wire[`RegBus]        data_1_o,
    output wire                 ready_o,
    output wire                 valid_o
);
    wire[`RegBus] mul_result_l;
    wire[`RegBus] mul_result_h;
    wire    mul_ready;
    wire    mul_valid;
    Multiplier multiplier0(
        .clk(clk), 
        .rst(rst), 

        .req_valid_i(req_valid_i), 
        .op_1_i(op_1_i), 
        .op_2_i(op_2_i), 
        .sign_op_1_i(sign_op_1_i), 
        .sign_op_2_i(sign_op_2_i), 
        .ctrl_signal_i(ctrl_signal_i),

        .result_l_o(mul_result_l), 
        .result_h_o(mul_result_h),
        .ready_o(mul_ready), 
        .ready_o(mul_valid)
    );

    wire[`RegBus] div_quotient;
    wire[`RegBus] div_remainder;
    wire    div_ready;
    wire    div_valid;
    Divider divider0(
        .clk(clk), 
        .rst(rst), 

        .req_valid_i(req_valid_i), 
        .op_1_i(op_1_i), 
        .op_2_i(op_2_i), 
        .sign_op_1_i(sign_op_1_i), 
        .sign_op_2_i(sign_op_2_i), 
        .ctrl_signal_i(ctrl_signal_i),

        .quotient_o(div_quotient), 
        .remainder_o(div_remainder), 
        .ready_o(div_ready), 
        .valid_o(div_valid) 
    );

/* data_1_o data_2_o */
    assign data_1_o = (mul_en==1'b1) ? mul_result_l : div_quotient;
    assign data_2_o = (mul_en==1'b1) ? mul_result_h : div_remainder;

/* ready_o valid_o */
    assign ready_o = (mul_en==1'b1) ? mul_ready : div_ready;
    assign valid_o = (mul_en==1'b1) ? mul_valid : div_valid;

endmodule