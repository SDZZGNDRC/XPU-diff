`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module CTRL (
    input wire                  clk,
    input wire                  rst,

    input wire                  dcache_ready_i,
    input wire                  icache_data_valid_i,
/*     input wire[`OpcodeBus]      ex_opcode_i,
    input wire[`FunctBus3]      ex_funct3_i, */
/*     input wire[`FunctBus7]      ex_funct7_i, */
    input wire[`AddrBus]        ex_pc_new_i,
    input wire                  ex_branch_flag_i,
    input wire                  mem_block_flag_i,

    output wire[`CTRL_Wire_Bus] ctrl_signal_pc_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_if_id_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_id_ex_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_ex_mem_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_mem_wb_o,
    output wire[`AddrBus]       ctrl_to_pc_new_o
);

    wire [`FSM_Wire_Bus] FSM_next_state;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_default;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_block_1;

    wire [`FSM_Wire_Bus] FSM_next_state_t;
    wire [`FSM_Wire_Bus] FSM_pre_state_t;

    Reg #(4, `FSM_STATE_Default) reg1 (clk, rst, FSM_next_state, FSM_next_state_t, 1'b1);
    Reg #(4, `FSM_STATE_Default) reg2 (clk, rst, FSM_next_state_t, FSM_pre_state_t, 1'b1);

    MuxKeyWithDefault #(3, 4, 4) mux1 (FSM_next_state, FSM_pre_state_t, `FSM_STATE_Default, {
        `FSM_STATE_Default, FSM_next_state_logic_default,
        `FSM_STATE_Block_1, FSM_next_state_logic_block_1,
        `FSM_STATE_Branch_1, `FSM_STATE_Default
    });

/* FSM_next_state_logic_default */
    assign FSM_next_state_logic_default = (mem_block_flag_i==1'b1) ? `FSM_STATE_Block_1 : 
                                          (ex_branch_flag_i==1'b1) ? `FSM_STATE_Branch_1 : 
                                          (icache_data_valid_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_Default;

/* FSM_next_state_logic_block_1 */
    assign FSM_next_state_logic_block_1 = (dcache_ready_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_Block_1;

/* ctrl_signal_pc_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_1;
    MuxKeyWithDefault #(3, 4, 2) mux2 (ctrl_signal_pc_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_pc_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default
    });
    assign ctrl_signal_pc_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Branch : `CTRL_STATE_Default;

/* ctrl_signal_if_id_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_1;
    MuxKeyWithDefault #(3, 4, 2) mux3 (ctrl_signal_if_id_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_if_id_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default
    });
    assign ctrl_signal_if_id_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block :
                                   (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Bubble : `CTRL_STATE_Default;

/* ctrl_signal_id_ex_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_1;
    MuxKeyWithDefault #(3, 4, 2) mux4 (ctrl_signal_id_ex_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_id_ex_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default
    });
    assign ctrl_signal_id_ex_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                   (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Bubble : `CTRL_STATE_Default;

/* ctrl_signal_ex_mem_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_1;
    MuxKeyWithDefault #(3, 4, 2) mux5 (ctrl_signal_ex_mem_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_ex_mem_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default
    });
    assign ctrl_signal_ex_mem_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
/*     assign ctrl_signal_ex_mem_t_1 = ({2{(ex_opcode_i == `Opcode_B_type && ex_funct3_i == `funct3_beq && ex_branch_flag_i == 1'b1)}} & `CTRL_STATE_Default)
                            |   ({2{(ex_opcode_i == `Opcode_I_type_jalr && ex_funct3_i == `funct3_jalr && ex_branch_flag_i == 1'b1)}} & `CTRL_STATE_Default)
                            |   ({2{(ex_opcode_i == `Opcode_J_type_jal)}} & `CTRL_STATE_Default); */

/* ctrl_signal_mem_wb_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_1;
    MuxKeyWithDefault #(3, 4, 2) mux6 (ctrl_signal_mem_wb_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_mem_wb_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default
    });
    assign ctrl_signal_mem_wb_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
/*     assign ctrl_signal_mem_wb_t_1 = ({2{(ex_opcode_i == `Opcode_B_type && ex_funct3_i == `funct3_beq && ex_branch_flag_i == 1'b1)}} & `CTRL_STATE_Default)
                            |   ({2{(ex_opcode_i == `Opcode_I_type_jalr && ex_funct3_i == `funct3_jalr && ex_branch_flag_i == 1'b1)}} & `CTRL_STATE_Default)
                            |   ({2{(ex_opcode_i == `Opcode_J_type_jal)}} & `CTRL_STATE_Default); */

/* ctrl_to_pc_new_o */
    assign ctrl_to_pc_new_o = ex_pc_new_i;

endmodule
