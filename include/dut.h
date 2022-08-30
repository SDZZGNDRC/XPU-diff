#pragma once
#include "Vtop.h"
#include "verilated.h"
#include "mif.h"
#include "encode.h"


class Dut
{
private:
    VerilatedContext* contextp_t;
    Vtop* top_t;
    mif* mif_t;
    bool finished = false;
public:
    /* Signals */
    reg_t icache_addr_o;
    reg_t dcache_addr_o;
    uint8_t icache_req_valid_o;
    uint8_t dcache_req_valid_o;
    uint8_t dcache_wen_o;
    reg_t dcache_wdata_o;
    uint8_t dcache_wlen_o;
    uint8_t icache_ctrl_signal_o;
    uint8_t dcache_ctrl_signal_o;
    reg_t diff_if_id_to_id_pc_o;
    reg_t diff_id_to_id_ex_pc_o;
    reg_t diff_dcache_addr_o;
    uint8_t diff_dcache_req_valid_o;
    uint8_t diff_dcache_wen_o;
    reg_t diff_dcache_wdata_o;
    uint8_t diff_dcache_wlen_o;
    reg_t diff_id_ex_to_ex_pc_o;
    reg_t diff_ex_to_ex_mem_pc_o;
    reg_t diff_ex_mem_to_mem_pc_o;
    reg_t diff_mem_to_mem_wb_pc_o;
    reg_t diff_mem_wb_pc_o;
    uint8_t diff_mem_wb_back_rd_addr_o;
    uint8_t diff_mem_wb_back_wreg_o;
    reg_t diff_mem_wb_back_wdata_o;
    reg_t *diff_regs_o;

    uint8_t icache_ready_i;
    uint8_t dcache_ready_i;
    uint8_t icache_data_valid_i;
    uint8_t dcache_data_valid_i;
    reg_t icache_data_i;
    reg_t dcache_data_i;
public:
    Dut(VerilatedContext* _contextp_t, Vtop* _top_t, mif* _mif_t);
    ~Dut();
    void update_inputs();
    void update_outputs();
    void posedge();
    void pass_time();
    void negedge();
    bool is_finished() { return finished; };
};


