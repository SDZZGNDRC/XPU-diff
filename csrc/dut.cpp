#include "dut.h"

Dut::Dut(VerilatedContext* _contextp_t, Vtop* _top_t, mif* _mif_t)
{
    contextp_t = _contextp_t;
    top_t = _top_t;
    mif_t = _mif_t;
    diff_regs_o = new reg_t[32]();
}

Dut::~Dut()
{
    delete [] diff_regs_o;
}

void Dut::update_inputs()
{
    top_t->icache_ready_i = icache_ready_i;
    top_t->dcache_ready_i = dcache_ready_i;
    top_t->icache_data_valid_i = icache_data_valid_i;
    top_t->dcache_data_valid_i = dcache_data_valid_i;
    top_t->icache_data_i = icache_data_i;
    top_t->dcache_data_i = dcache_data_i;
}

void Dut::update_outputs()
{
    /* Get the output of the dut before posedge */
    icache_addr_o = top_t->icache_addr_o;
    dcache_addr_o = top_t->dcache_addr_o;
    icache_req_valid_o = top_t->icache_req_valid_o;
    dcache_req_valid_o = top_t->dcache_req_valid_o;
    dcache_wen_o = top_t->dcache_wen_o;
    dcache_wdata_o = top_t->dcache_wdata_o;
    dcache_wlen_o = top_t->dcache_wlen_o;
    icache_ctrl_signal_o = top_t->icache_ctrl_signal_o;
    dcache_ctrl_signal_o = top_t->dcache_ctrl_signal_o;
    diff_if_id_to_id_pc_o = top_t->diff_if_id_to_id_pc_o;
    diff_id_to_id_ex_pc_o = top_t->diff_id_to_id_ex_pc_o;
    diff_dcache_addr_o = top_t->diff_dcache_addr_o;
    diff_dcache_req_valid_o = top_t->diff_dcache_req_valid_o;
    diff_dcache_wen_o = top_t->diff_dcache_wen_o;
    diff_dcache_wdata_o = top_t->diff_dcache_wdata_o;
    diff_dcache_wlen_o = top_t->diff_dcache_wlen_o;
    diff_id_ex_to_ex_pc_o = top_t->diff_id_ex_to_ex_pc_o;
    diff_ex_to_ex_mem_pc_o = top_t->diff_ex_to_ex_mem_pc_o;
    diff_ex_mem_to_mem_pc_o = top_t->diff_ex_mem_to_mem_pc_o;
    diff_mem_to_mem_wb_pc_o = top_t->diff_mem_to_mem_wb_pc_o;
    diff_mem_wb_pc_o = top_t->diff_mem_wb_pc_o;
    diff_mem_wb_back_rd_addr_o = top_t->diff_mem_wb_back_rd_addr_o;
    diff_mem_wb_back_wreg_o = top_t->diff_mem_wb_back_wreg_o;
    diff_mem_wb_back_wdata_o = top_t->diff_mem_wb_back_wdata_o;
    memcpy(diff_regs_o, top_t->diff_regs_o, 32*sizeof(reg_t));
}


void Dut::posedge()
{
    /* =============POSEDGE-Start============== */
    top_t->clk = 1;
    top_t->eval_step();
    /* =============POSEDGE-End============== */
    /* Drive the output to the dut after posedge */
}

void Dut::pass_time()
{
    contextp_t->timeInc(1);
    top_t->eval_step();
    top_t->eval_end_step();
}

void Dut::negedge()
{
    /* =============NEGEDGE============== */
    top_t->clk = 0;
    contextp_t->timeInc(1);
    top_t->eval();
}
