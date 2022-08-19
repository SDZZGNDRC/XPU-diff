`include "defines.v"
module MULDIV (
    input wire              clk,
    input wire              rst,

    input wire              mul_en_i,
    input wire[`RegBus]     rs1_data_i,
    input wire[`RegBus]     rs2_data_i,
    input wire[`CTRL_Wire_Bus]  ctrl_signal_muldiv_i,

    output wire             ready_o,
    output wire             valid_o,
    output wire[`RegBus]    result_o
);
    assign ready_o = mul_en_i;
    assign valid_o = mul_en_i;
    reg[`RegBus] result;
    assign result_o = result;
    always @(posedge clk) begin
        if(rst==1'b0 && ctrl_signal_muldiv_i == `CTRL_STATE_Default) begin
            result <= rs1_data_i + rs2_data_i;
        end
        else begin
            result <= rs1_data_i - rs2_data_i;
        end
    end
endmodule
