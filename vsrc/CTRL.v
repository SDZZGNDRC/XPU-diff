`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module CTRL (
    input wire                  clk,
    input wire                  rst,

    input wire                  icache_ready_i,
    input wire                  dcache_ready_i,
/*     input wire[`OpcodeBus]      ex_opcode_i,
    input wire[`FunctBus3]      ex_funct3_i, */
/*     input wire[`FunctBus7]      ex_funct7_i, */
    input wire[`AddrBus]        ex_pc_new_i,
    input wire                  if_id_block_flag_i,
    input wire                  ex_branch_flag_i,
    input wire                  mem_block_flag_i,

    output wire[`CTRL_Wire_Bus] ctrl_signal_pc_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_if_id_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_id_ex_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_ex_mem_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_mem_wb_o,
    output wire[`AddrBus]       ctrl_to_pc_new_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_icache_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_dcache_o
);

    wire [`FSM_Wire_Bus] FSM_pre_state;
    wire [`FSM_Wire_Bus] FSM_next_state;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_default;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_block_1;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_block_2;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_branch_1_block_1;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_branch_1_block_2;

    wire [`FSM_Wire_Bus] FSM_next_state_t;
    wire [`FSM_Wire_Bus] FSM_pre_state_t;

    Reg #(4, `FSM_STATE_Default) reg1 (clk, rst, FSM_next_state, FSM_next_state_t, 1'b1);
    Reg #(4, `FSM_STATE_Default) reg2 (clk, rst, FSM_pre_state, FSM_pre_state_t, 1'b1);

    assign FSM_pre_state = (FSM_next_state_t==`FSM_STATE_Branch_1 && FSM_next_state!=`FSM_STATE_Default) ? FSM_next_state : FSM_next_state_t;

    MuxKeyWithDefault #(6, 4, 4) mux1 (FSM_next_state, FSM_pre_state_t, `FSM_STATE_Default, {
        `FSM_STATE_Default, FSM_next_state_logic_default,
        `FSM_STATE_Block_1, FSM_next_state_logic_block_1,
        `FSM_STATE_Block_2, FSM_next_state_logic_block_2,
        `FSM_STATE_Branch_1, `FSM_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, FSM_next_state_logic_branch_1_block_1,
        `FSM_STATE_Branch_1_Block_2, FSM_next_state_logic_branch_1_block_2
    });

/* FSM_next_state_logic_default */
    wire [`FSM_Wire_Bus] FSM_next_state_logic_branch_block_1;
    wire [`FSM_Wire_Bus] FSM_next_state_logic_branch_block_2;
    assign FSM_next_state_logic_default = (mem_block_flag_i==1'b1) ? FSM_next_state_logic_branch_block_1 : 
                                          (if_id_block_flag_i==1'b1) ? FSM_next_state_logic_branch_block_2 : 
                                          (ex_branch_flag_i==1'b1) ? `FSM_STATE_Branch_1 : `FSM_STATE_Default;
    assign FSM_next_state_logic_branch_block_1 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `FSM_STATE_Branch_1_Block_1 : `FSM_STATE_Block_1;
    assign FSM_next_state_logic_branch_block_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `FSM_STATE_Branch_1_Block_2 : `FSM_STATE_Block_2;


/* FSM_next_state_logic_block_1 */
    assign FSM_next_state_logic_block_1 = (dcache_ready_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_Block_1;

/* FSM_next_state_logic_block_2 */
    assign FSM_next_state_logic_block_2 = (icache_ready_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_Block_2;

/* FSM_next_state_logic_branch_1_block_1 */
    assign FSM_next_state_logic_branch_1_block_1 = (dcache_ready_i==1'b1) ? `FSM_STATE_Branch_1 : `FSM_STATE_Branch_1_Block_1;

/* FSM_next_state_logic_branch_1_block_2 */
    assign FSM_next_state_logic_branch_1_block_2 = (icache_ready_i==1'b1) ? `FSM_STATE_Branch_1 : `FSM_STATE_Branch_1_Block_2;

/* ctrl_signal_pc_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux2 (ctrl_signal_pc_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_pc_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Block_2, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_pc_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_pc_t_3
    });
    assign ctrl_signal_pc_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Branch : `CTRL_STATE_Default;
    assign ctrl_signal_pc_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;
    assign ctrl_signal_pc_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;

/* ctrl_signal_if_id_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux3 (ctrl_signal_if_id_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_if_id_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Block_2, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_if_id_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_if_id_t_3
    });
    assign ctrl_signal_if_id_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block :
                                   (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block :
                                   (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Bubble : `CTRL_STATE_Default;
    assign ctrl_signal_if_id_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;
    assign ctrl_signal_if_id_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;

/* ctrl_signal_id_ex_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux4 (ctrl_signal_id_ex_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_id_ex_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Block_2, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_id_ex_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_id_ex_t_3
    });
    assign ctrl_signal_id_ex_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                   (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                   (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Bubble : `CTRL_STATE_Default;
    assign ctrl_signal_id_ex_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;
    assign ctrl_signal_id_ex_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;


/* ctrl_signal_ex_mem_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux5 (ctrl_signal_ex_mem_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_ex_mem_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Block_2, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_ex_mem_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_ex_mem_t_3
    });
    assign ctrl_signal_ex_mem_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                    (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_ex_mem_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;
    assign ctrl_signal_ex_mem_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;

/* ctrl_signal_mem_wb_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux6 (ctrl_signal_mem_wb_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_mem_wb_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Block_2, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_mem_wb_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_mem_wb_t_3
    });
    assign ctrl_signal_mem_wb_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                    (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_mem_wb_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;
    assign ctrl_signal_mem_wb_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;

/* ctrl_to_pc_new_o */
    assign ctrl_to_pc_new_o = ex_pc_new_i;

/* ctrl_signal_icache_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_icache (ctrl_signal_icache_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_icache_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Block,
        `FSM_STATE_Block_2, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_icache_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_icache_t_3
    });
    assign ctrl_signal_icache_t_1 = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_icache_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;
    assign ctrl_signal_icache_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Default;

/* ctrl_signal_dcache_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_1;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_2;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_3;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_dcache (ctrl_signal_dcache_o, FSM_pre_state_t, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_dcache_t_1,
        `FSM_STATE_Block_1, `CTRL_STATE_Default,
        `FSM_STATE_Block_2, `CTRL_STATE_Block,
        `FSM_STATE_Branch_1, `CTRL_STATE_Default,
        `FSM_STATE_Branch_1_Block_1, ctrl_signal_dcache_t_2,
        `FSM_STATE_Branch_1_Block_2, ctrl_signal_dcache_t_3
    });
    assign ctrl_signal_dcache_t_1 = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_dcache_t_2 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Default;
    assign ctrl_signal_dcache_t_3 = (FSM_next_state_t==`FSM_STATE_Branch_1) ? `CTRL_STATE_Default : `CTRL_STATE_Block;

endmodule
