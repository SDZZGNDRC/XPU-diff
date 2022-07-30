`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module CTRL (
    input wire                  clk,
    input wire                  rst,

    input wire[`OpcodeBus]      ex_opcode_i,
    input wire[`FunctBus3]      ex_funct3_i,
    // input wire[`FunctBus7]      ex_funct7_i,
    input wire[`AddrBus]        ex_pc_new_i,
    input wire                  ex_branch_flag_i,

    output reg[`CTRL_Wire_Bus] ctrl_signal_pc_o,
    output reg[`CTRL_Wire_Bus] ctrl_signal_if_id_o,
    output reg[`CTRL_Wire_Bus] ctrl_signal_id_ex_o,
    output reg[`CTRL_Wire_Bus] ctrl_signal_ex_mem_o,
    output reg[`CTRL_Wire_Bus] ctrl_signal_mem_wb_o,
    output reg[`AddrBus]       ctrl_to_pc_new_o
);

    reg [`FSM_Wire_Bus] FSM_pre_state;
    reg [`FSM_Wire_Bus] FSM_next_state;

    always @(posedge clk) begin // 状态切换
        if(rst) begin
            FSM_pre_state <= `FSM_STATE_Default;
        end else begin
            FSM_pre_state <= FSM_next_state;
        end
    end

    always @(*) begin //计算下一状态
        case (FSM_pre_state)
            `FSM_STATE_Default : begin
                if(ex_opcode_i == `Opcode_B_type && ex_funct3_i == `funct3_beq && ex_branch_flag_i == 1'b1) begin
                    FSM_next_state <= `FSM_STATE_Branch_start;
                end else if(ex_opcode_i == `Opcode_I_type_jalr && ex_funct3_i == `funct3_jalr && ex_branch_flag_i == 1'b1) begin
                    FSM_next_state <= `FSM_STATE_Branch_start;
                end else if(ex_opcode_i == `Opcode_J_type_jal) begin
                    FSM_next_state <= `FSM_STATE_Branch_start;
                end else begin
                    FSM_next_state <= `FSM_STATE_Default;
                end
            end

            `FSM_STATE_Branch_start : begin
                FSM_next_state <= `FSM_STATE_Branch_wait;
            end

            `FSM_STATE_Branch_wait : begin
                FSM_next_state <= `FSM_STATE_Default;
            end

            default : begin
                FSM_next_state <= `FSM_STATE_Default;
            end
        endcase
    end

    always @(*) begin // 根据当前状态决定输出
        case (FSM_pre_state)
            `FSM_STATE_Default : begin
                ctrl_iram_rdata_sel_o <= 1'b0;
                if(ex_opcode_i == `Opcode_B_type && ex_funct3_i == `funct3_beq && ex_branch_flag_i == 1'b1)begin
                    ctrl_signal_pc_o        <= `CTRL_STATE_Stalled;
                    ctrl_signal_if_id_o     <= `CTRL_STATE_Stalled;
                    ctrl_signal_id_ex_o     <= `CTRL_STATE_Stalled;
                    ctrl_signal_ex_mem_o    <= `CTRL_STATE_Bubble;
                    ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;
                end else if(ex_opcode_i == `Opcode_I_type_jalr && ex_funct3_i == `funct3_jalr && ex_branch_flag_i == 1'b1)begin
                    ctrl_signal_pc_o        <= `CTRL_STATE_Stalled;
                    ctrl_signal_if_id_o     <= `CTRL_STATE_Stalled;
                    ctrl_signal_id_ex_o     <= `CTRL_STATE_Stalled;
                    ctrl_signal_ex_mem_o    <= `CTRL_STATE_Bubble;
                    ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;
                end else if(ex_opcode_i == `Opcode_J_type_jal)begin
                    ctrl_signal_pc_o        <= `CTRL_STATE_Stalled;
                    ctrl_signal_if_id_o     <= `CTRL_STATE_Stalled;
                    ctrl_signal_id_ex_o     <= `CTRL_STATE_Stalled;
                    ctrl_signal_ex_mem_o    <= `CTRL_STATE_Bubble;
                    ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;
                end else begin
                    ctrl_signal_pc_o        <= `CTRL_STATE_Default;
                    ctrl_signal_if_id_o     <= `CTRL_STATE_Default;
                    ctrl_signal_id_ex_o     <= `CTRL_STATE_Default;
                    ctrl_signal_ex_mem_o    <= `CTRL_STATE_Default;
                    ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;
                end

                ctrl_to_pc_branch_flag_o <= 1'b0;
                ctrl_to_pc_new_o <= `Invalid_pc;
            end

            `FSM_STATE_Branch_start : begin

                ctrl_iram_rdata_sel_o <= 1'b1;
                ctrl_signal_pc_o        <= `CTRL_STATE_Branch;
                ctrl_signal_if_id_o     <= `CTRL_STATE_Bubble;
                ctrl_signal_id_ex_o     <= `CTRL_STATE_Bubble;
                ctrl_signal_ex_mem_o    <= `CTRL_STATE_Default;
                ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;

                ctrl_to_pc_branch_flag_o <= 1'b1;
                ctrl_to_pc_new_o <= ex_pc_new_i;
            end

            `FSM_STATE_Branch_wait : begin

                ctrl_iram_rdata_sel_o <= 1'b1;
                ctrl_signal_pc_o        <= `CTRL_STATE_Default;
                ctrl_signal_if_id_o     <= `CTRL_STATE_Bubble;
                ctrl_signal_id_ex_o     <= `CTRL_STATE_Default;
                ctrl_signal_ex_mem_o    <= `CTRL_STATE_Default;
                ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;

                ctrl_to_pc_branch_flag_o <= 1'b1;
                ctrl_to_pc_new_o <= ex_pc_new_i;
            end

            default : begin

                ctrl_iram_rdata_sel_o <= 1'b0;
                ctrl_signal_pc_o        <= `CTRL_STATE_Default;
                ctrl_signal_if_id_o     <= `CTRL_STATE_Default;
                ctrl_signal_id_ex_o     <= `CTRL_STATE_Default;
                ctrl_signal_ex_mem_o    <= `CTRL_STATE_Default;
                ctrl_signal_mem_wb_o    <= `CTRL_STATE_Default;

                ctrl_to_pc_branch_flag_o <= 1'b0;
                ctrl_to_pc_new_o <= `Invalid_pc;
            end
        endcase
    end

endmodule