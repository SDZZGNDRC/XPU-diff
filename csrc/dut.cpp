#include "dut.h"

Dut::Dut(VerilatedContext* _contextp_t, Vtop* _top_t, mif* _mif_t)
{
    contextp_t = _contextp_t;
    top_t = _top_t;
    mif_t = _mif_t;
    diff_regs_i = new reg_t(32);
}

Dut::~Dut()
{
    delete diff_regs_i;
}

void Dut::init()
{
	int init_cylces = 10;
	top_t->rst = 1;
	for(int i = 0; i < init_cylces; i++)
	{
        /* Get the output of the dut before posedge */
		icache_addr_i_t = top_t->icache_addr_o;
		icache_req_valid_i = top_t->icache_req_valid_o;
		icache_wen_i = top_t->icache_wen_o;
		/* =============POSEDGE-Start============== */
		top_t->clk = 1;
		top_t->eval_step();
		/* =============POSEDGE-End============== */
        /* Drive the output to the dut after posedge */
		top_t->icache_data_valid_i = 1;
		top_t->dcache_data_valid_i = 1;
		if (icache_req_valid_i == 1 && icache_wen_i == 0){
			mif_t->load(icache_addr_i, 4, (uint8_t*)&top_t->icache_data_i);
			printf("icache_addr_i_t = 0x%016lx\tINST = 0x%08x\n", icache_addr_i, top_t->icache_data_i);
		} else {
			top_t->icache_data_i = 0x0;
		}
		icache_addr_i = icache_addr_i_t;
		if(i == init_cylces-1){
			top_t->rst = 0;
		}
		contextp_t->timeInc(1);
		top_t->eval_step();
		top_t->eval_end_step();
		/* =============NEGEDGE============== */
		top_t->clk = 0;
		contextp_t->timeInc(1);
		top_t->eval();
	}
}

void Dut::update_output()
{

}

void Dut::step_one_cycle()
{
    /* Get the output of the dut before posedge */
    icache_addr_i_t = top_t->icache_addr_o;
    icache_req_valid_i_t = top_t->icache_req_valid_o;
    icache_wen_i = top_t->icache_wen_o;
    dcache_addr_i_t = top_t->dcache_addr_o;
    dcache_req_valid_i_t = top_t->dcache_req_valid_o;
    dcache_wen_i = top_t->dcache_wen_o;
    dcache_wdata_i = top_t->dcache_wdata_o;
    dcache_wlen_i = top_t->dcache_wlen_o;
    diff_if_id_to_id_pc_i = top_t->diff_if_id_to_id_pc_o;
    diff_id_to_id_ex_pc_i = top_t->diff_id_to_id_ex_pc_o;
    diff_id_ex_to_ex_pc_i = top_t->diff_id_ex_to_ex_pc_o;
    diff_regs_i = top_t->diff_regs_o;
    memcpy(diff_regs_i, &(top_t->diff_regs_o), 32*sizeof(reg_t));
    /* =============POSEDGE-Start============== */
    top_t->clk = 1;
    top_t->eval_step();
    /* =============POSEDGE-End============== */
    /* Drive the output to the dut after posedge */
    top_t->dcache_ready_i = dcache_ready_o;
    top_t->icache_data_valid_i = icache_data_valid_o;
    top_t->dcache_data_valid_i = dcache_data_valid_o;
    top_t->icache_data_i = icache_data_o;
    top_t->dcache_data_i = dcache_data_o;
    /* icache_addr_i = icache_addr_i_t; */
    contextp_t->timeInc(1);
    top_t->eval_step();
    top_t->eval_end_step();
    /* =============NEGEDGE============== */
    top_t->clk = 0;
    contextp_t->timeInc(1);
    top_t->eval();
}


