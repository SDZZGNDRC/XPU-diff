#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "mif.h"
#include "logparser.h"
#include "utils.h"
#include "state.h"
#include "dut.h"
#include "ICache.h"
#include "DCache.h"
#include "DiffTest.h"

#define MOSTINST 100000000
#define OMITINST 13

uint64_t icache_addr_t = 0x7ffffffc; // The address received last cycle.
uint64_t icache_addr = 0x7ffffffc; // The address received last cycle.

uint8_t icache_req_valid_o = 0;
uint8_t icache_wen_o = 0;


bool update_state(std::vector<std::pair<InstType, Inst>>::iterator iter, Logparser logparser_t, state *state_p)
{
	size_t rd, rd_new_value;
	if(iter == logparser_t.traces.end())
	{
		return false;
	}
	switch (iter->first)
	{
	case COMMONINST:
		state_p->pc = boost::get<commonInst>(iter->second).pc;
		rd = boost::get<commonInst>(iter->second).rd;
		rd_new_value = boost::get<commonInst>(iter->second).rd_new_value;
		state_p->XPR.write(rd, rd_new_value);
		state_p->mem_update_valid = false;
		break;
	case BRANCHINST:
		state_p->pc = boost::get<branchInst>(iter->second).pc;
		rd = boost::get<branchInst>(iter->second).rd;
		rd_new_value = boost::get<branchInst>(iter->second).rd_new_value;
		state_p->XPR.write(rd, rd_new_value);
		state_p->mem_update_valid = false;
		break;
	case LOADINST:
		state_p->pc = boost::get<loadInst>(iter->second).pc;
		rd = boost::get<loadInst>(iter->second).rd;
		rd_new_value = boost::get<loadInst>(iter->second).rd_new_value;
		state_p->XPR.write(rd, rd_new_value);
		state_p->mem_update_valid = false;
		break;
	case STOREINST:
		state_p->pc = boost::get<storeInst>(iter->second).pc;
		state_p->mem_update_valid = true;
		state_p->mem_update_addr = boost::get<storeInst>(iter->second).mem_addr;
		state_p->mem_update_value = boost::get<storeInst>(iter->second).mem_val;
		state_p->mem_update_len = boost::get<storeInst>(iter->second).mem_len;
		break;
	case SPECIALINST:
		state_p->pc = boost::get<specialInst>(iter->second).pc;
		state_p->mem_update_valid = false;
		if(boost::get<specialInst>(iter->second).name == "ecall")
		{
			printf("\033[34mUpdate state of spike: get ECALL\033[0m\n");
			return false;
		}
		break;
	default:
		assert(0);
	}
	return true;
}

void init(Vtop *top, Dut *dut_p, ICache *icache_p, DCache *dcache_p)
{
	int init_cylces = 2;
	top->rst = 1;
	for(int i = 0; i < init_cylces; i++)
	{
		step_one_cycle(dut_p, icache_p, dcache_p);
	}
	top->rst = 0;
}

int main(int argc, char** argv, char** env)
{
	Verilated::mkdir("logs");
	VerilatedContext* contextp = new VerilatedContext;
#ifndef NODIFF
	contextp->traceEverOn(true);
#endif
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop{contextp};
	mif *_mif = new mif; // The interface of the memory
#ifndef NODIFF
	Logparser logparser_t("./log.txt");
	auto iter = logparser_t.traces.begin();
#endif
	elfloader(argv[1], _mif);
	state state_t;
	Dut dut(contextp, top, _mif);
	ICache icache(_mif);
	DCache dcache(_mif);
	DiffTest difftest(&state_t, &dut, &dcache, &icache);
	int count = 1;
	bool pass_flag = false;
	reg_t pc_t = 0;
	/* INIT */
	init(top, &dut, &icache, &dcache);
	/* Synchronize the dut and the spike */
#ifndef NODIFF
	while (true)
	{
		if(dut.diff_mem_wb_pc_o == RESET_VALUE_PC)
		{
			break;
		}
		step_one_cycle(&dut, &icache, &dcache);
	}
	while (true)
	{
		if(state_t.pc == RESET_VALUE_PC)
		{
			break;
		}
		update_state(iter++, logparser_t, &state_t);
	}
	if(!difftest.check_pc())
	{
		assert(0);
	}
#endif
	while (!contextp->gotFinish())
	{
#ifdef TIME_COUNT
		clock_t t1, t2, t3, t4, t5;
		t1 = clock();
#endif
		step_one_cycle(&dut, &icache, &dcache);
#ifdef TIME_COUNT
		t3 = clock();
#endif
		if(dut.diff_mem_wb_pc_o == 0 | dut.diff_mem_wb_pc_o == pc_t) // omit this step when dut is blocking or bubbling.
		{
			difftest.update_mem_store(); // if do not update the mem_store, it will miss the mem_store when I/DCache coming.
			continue;
		}else
		{
			// recode the pc_t of this step, it will be uesed next step.
			pc_t = dut.diff_mem_wb_pc_o;
		}
#ifdef TIME_COUNT
		t4 = clock();
#endif
#ifndef NODIFF
		if(!update_state(iter++, logparser_t, &state_t)) // ecall
		{
			pass_flag = true;
			/* count = MOSTINST; */
			break;
		}
#endif
#ifdef NODIFF
		if(dut.icache_data_i == ECALL)
		{
			pass_flag = true;
			/* count = MOSTINST; */
			break;
		}
#endif
#ifdef TIME_COUNT
		t5 = clock();
#endif
#ifndef NODIFF
		if(count > OMITINST && !difftest.check_all())
		{
			pass_flag = false;
			break;
			/* printf("There something wrong!\n"); */
			/* assert(0); */
		}
#endif
		count += 1;
#ifdef TIME_COUNT
		t2 = clock();
		printf("main: total=%f\n", (double)(t2-t1)/CLOCKS_PER_SEC);
		printf("main: t3-t1=%f\n", (double)(t3-t1)/CLOCKS_PER_SEC);
		printf("main: t4-t3=%f\n", (double)(t4-t3)/CLOCKS_PER_SEC);
		printf("main: t5-t4=%f\n", (double)(t5-t4)/CLOCKS_PER_SEC);
#endif
	}
	if(pass_flag)
	{
		printf("\033[32mPASS!!!\033[0m\n");
	}
	else
	{
		printf("\033[31mFAIL!!!\033[0m\n");
	}
	printf("\033[34mDIFF-TEST FINISHED!!!\033[0m\n");
    delete _mif;
	delete top;
	delete contextp;
	return 0;
}
