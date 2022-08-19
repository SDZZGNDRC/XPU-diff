`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module CTRL (
    input wire                  clk,
    input wire                  rst,

    input wire                  icache_ready_i,
    input wire                  muldiv_ready_i,
    input wire                  dcache_ready_i,
    input wire[`AddrBus]        ex_pc_new_i,
    input wire                  if_id_block_flag_i,
    input wire                  ex_branch_flag_i,
    input wire                  ex_block_flag_i,
    input wire                  mem_block_flag_i,

    output wire[`CTRL_Wire_Bus] ctrl_signal_pc_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_if_id_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_id_ex_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_muldiv_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_ex_mem_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_mem_wb_o,
    output wire[`AddrBus]       ctrl_to_pc_new_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_icache_o,
    output wire[`CTRL_Wire_Bus] ctrl_signal_dcache_o
);

    wire [`FSM_Wire_Bus] FSM_pre_state;
    wire [`FSM_Wire_Bus] FSM_next_state;

    wire [`FSM_Wire_Bus] FSM_next_state_t_Default;
    wire [`FSM_Wire_Bus] FSM_next_state_t_DBlock;
    wire [`FSM_Wire_Bus] FSM_next_state_t_IBlock;
    wire [`FSM_Wire_Bus] FSM_next_state_t_Branch;
    wire [`FSM_Wire_Bus] FSM_next_state_t_EXBlock;
    wire [`FSM_Wire_Bus] FSM_next_state_t_Branch_IBlock;
    assign FSM_next_state_t_Default = (mem_block_flag_i==1'b1) ? `FSM_STATE_DBlock : 
                                      (if_id_block_flag_i==1'b1) ? `FSM_STATE_IBlock :
                                      (ex_branch_flag_i==1'b1) ? `FSM_STATE_Branch : 
                                      (ex_block_flag_i==1'b1) ? `FSM_STATE_EXBlock : `FSM_STATE_Default;;
    assign FSM_next_state_t_DBlock = (dcache_ready_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_DBlock;
    assign FSM_next_state_t_IBlock = (icache_ready_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_IBlock;
    assign FSM_next_state_t_Branch = (if_id_block_flag_i==1'b1) ? `FSM_STATE_Branch_IBlock : `FSM_STATE_Default;
    assign FSM_next_state_t_EXBlock = (muldiv_ready_i==1'b1) ? `FSM_STATE_Default : `FSM_STATE_EXBlock;
    assign FSM_next_state_t_Branch_IBlock = (if_id_block_flag_i==1'b1) ? `FSM_STATE_Branch : `FSM_STATE_Branch_IBlock;
    Reg #(4, `FSM_STATE_Default) reg_FSM_pre_state (clk, rst, FSM_next_state, FSM_pre_state, 1'b1);
    MuxKeyWithDefault #(6, 4, 4) mux_FSM_next_state (FSM_next_state, FSM_pre_state, `FSM_STATE_Default, {
        `FSM_STATE_Default, FSM_next_state_t_Default,
        `FSM_STATE_DBlock, FSM_next_state_t_DBlock,
        `FSM_STATE_IBlock, FSM_next_state_t_IBlock,
        `FSM_STATE_Branch, FSM_next_state_t_Branch,
        `FSM_STATE_EXBlock, FSM_next_state_t_EXBlock,
        `FSM_STATE_Branch_IBlock, FSM_next_state_t_Branch_IBlock
    });

/* ctrl_signal_pc_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_pc_t_Branch_IBlock;
    assign ctrl_signal_pc_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                      (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                      (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Branch : 
                                      (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_pc_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_pc_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_pc_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_pc_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_pc_t_Branch_IBlock = `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_pc_o (ctrl_signal_pc_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_pc_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_pc_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_pc_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_pc_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_pc_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_pc_t_Branch_IBlock
    });

/* ctrl_signal_if_id_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_if_id_t_Branch_IBlock;
    assign ctrl_signal_if_id_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                      (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                      (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Bubble : 
                                      (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_if_id_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_if_id_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_if_id_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_if_id_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_if_id_t_Branch_IBlock = (icache_ready_i==1'b1) ? `CTRL_STATE_Bubble : `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_if_id_o (ctrl_signal_if_id_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_if_id_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_if_id_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_if_id_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_if_id_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_if_id_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_if_id_t_Branch_IBlock
    });

/* ctrl_signal_id_ex_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_id_ex_t_Branch_IBlock;
    assign ctrl_signal_id_ex_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                         (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                         (ex_branch_flag_i==1'b1) ? `CTRL_STATE_Bubble : 
                                         (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_id_ex_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_id_ex_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_id_ex_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_id_ex_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_id_ex_t_Branch_IBlock = `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_id_ex_o (ctrl_signal_id_ex_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_id_ex_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_id_ex_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_id_ex_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_id_ex_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_id_ex_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_id_ex_t_Branch_IBlock
    });

/* ctrl_signal_muldiv_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_muldiv_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_muldiv_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_muldiv_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_muldiv_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_muldiv_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_muldiv_t_Branch_IBlock;
    assign ctrl_signal_muldiv_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_muldiv_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_muldiv_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_muldiv_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_muldiv_t_EXBlock = `CTRL_STATE_Default;
    assign ctrl_signal_muldiv_t_Branch_IBlock = `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_muldiv_o (ctrl_signal_muldiv_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_muldiv_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_muldiv_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_muldiv_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_muldiv_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_muldiv_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_muldiv_t_Branch_IBlock
    });

/* ctrl_signal_ex_mem_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_ex_mem_t_Branch_IBlock;
    assign ctrl_signal_ex_mem_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_ex_mem_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_ex_mem_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_ex_mem_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_ex_mem_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_ex_mem_t_Branch_IBlock = `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_ex_mem_o (ctrl_signal_ex_mem_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_ex_mem_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_ex_mem_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_ex_mem_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_ex_mem_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_ex_mem_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_ex_mem_t_Branch_IBlock
    });

/* ctrl_signal_mem_wb_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_mem_wb_t_Branch_IBlock;
    assign ctrl_signal_mem_wb_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_mem_wb_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_mem_wb_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_mem_wb_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_mem_wb_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_mem_wb_t_Branch_IBlock = `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_mem_wb_o (ctrl_signal_mem_wb_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_mem_wb_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_mem_wb_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_mem_wb_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_mem_wb_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_mem_wb_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_mem_wb_t_Branch_IBlock
    });

/* ctrl_to_pc_new_o */
    assign ctrl_to_pc_new_o = ex_pc_new_i;

/* ctrl_signal_icache_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_icache_t_Branch_IBlock;
    assign ctrl_signal_icache_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Default : 
                                          (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_icache_t_DBlock = `CTRL_STATE_Block;
    assign ctrl_signal_icache_t_IBlock = `CTRL_STATE_Default;
    assign ctrl_signal_icache_t_Branch = `CTRL_STATE_Default;
    assign ctrl_signal_icache_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_icache_t_Branch_IBlock = `CTRL_STATE_Default;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_icache_o (ctrl_signal_icache_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_icache_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_icache_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_icache_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_icache_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_icache_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_icache_t_Branch_IBlock
    });

/* ctrl_signal_dcache_o */
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_Default;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_DBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_IBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_Branch;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_EXBlock;
    wire [`CTRL_Wire_Bus] ctrl_signal_dcache_t_Branch_IBlock;
    assign ctrl_signal_dcache_t_Default = (mem_block_flag_i==1'b1) ? `CTRL_STATE_Default : 
                                          (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : 
                                          (ex_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;
    assign ctrl_signal_dcache_t_DBlock = `CTRL_STATE_Default;
    assign ctrl_signal_dcache_t_IBlock = `CTRL_STATE_Block;
    assign ctrl_signal_dcache_t_Branch = (if_id_block_flag_i==1'b1) ? `CTRL_STATE_Block : `CTRL_STATE_Default;;
    assign ctrl_signal_dcache_t_EXBlock = `CTRL_STATE_Block;
    assign ctrl_signal_dcache_t_Branch_IBlock = `CTRL_STATE_Block;
    MuxKeyWithDefault #(6, 4, 2) mux_ctrl_signal_dcache_o (ctrl_signal_dcache_o, FSM_pre_state, `CTRL_STATE_Default, {
        `FSM_STATE_Default, ctrl_signal_dcache_t_Default,
        `FSM_STATE_DBlock, ctrl_signal_dcache_t_DBlock,
        `FSM_STATE_IBlock, ctrl_signal_dcache_t_IBlock,
        `FSM_STATE_Branch, ctrl_signal_dcache_t_Branch,
        `FSM_STATE_EXBlock, ctrl_signal_dcache_t_EXBlock,
        `FSM_STATE_Branch_IBlock, ctrl_signal_dcache_t_Branch_IBlock
    });

endmodule
