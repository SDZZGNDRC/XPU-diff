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


uint64_t icache_addr_t = 0x7ffffffc; // The address received last cycle.
uint64_t icache_addr = 0x7ffffffc; // The address received last cycle.

uint8_t icache_req_valid_o = 0;
uint8_t icache_wen_o = 0;



bool update_state(Logparser logparser_t, state state_t)
{
	static auto iter = logparser_t.traces.begin();
	size_t rd, rd_new_value;
	if(iter == logparser_t.traces.end())
	{
		return false;
	}
	switch (iter->first)
	{
	case COMMONINST:
		state_t.pc = boost::get<commonInst>(iter->second).pc;
		rd = state_t.pc = boost::get<commonInst>(iter->second).rd;
		rd_new_value = boost::get<commonInst>(iter->second).rd_new_value;
		if(rd>=0)
		{
			state_t.XPR.write(rd, rd_new_value);
		}
		state_t.mem_update_valid = false;
		break;
	case BRANCHINST:
		state_t.pc = boost::get<branchInst>(iter->second).pc;
		rd = state_t.pc = boost::get<branchInst>(iter->second).rd;
		rd_new_value = boost::get<branchInst>(iter->second).rd_new_value;
		if(rd>=0)
		{
			state_t.XPR.write(rd, rd_new_value);
		}
		state_t.mem_update_valid = false;
		break;
	case LOADINST:
		state_t.pc = boost::get<loadInst>(iter->second).pc;
		rd = state_t.pc = boost::get<loadInst>(iter->second).rd;
		rd_new_value = boost::get<loadInst>(iter->second).rd_new_value;
		if(rd>=0)
		{
			state_t.XPR.write(rd, rd_new_value);
		}
		state_t.mem_update_valid = false;
		break;
	case STOREINST:
		state_t.pc = boost::get<storeInst>(iter->second).pc;
		state_t.mem_update_valid = true;
		state_t.mem_update_addr = boost::get<storeInst>(iter->second).mem_addr;
		state_t.mem_update_value = boost::get<storeInst>(iter->second).mem_val;
		state_t.mem_update_len = boost::get<storeInst>(iter->second).mem_len;
		break;
	case SPECIALINST:
		state_t.pc = boost::get<specialInst>(iter->second).pc;
		state_t.mem_update_valid = false;
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
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop{contextp};
	mif *_mif = new mif; // The interface of the memory
	Logparser logparser_t("./log.txt");
	elfloader(argv[1], _mif);
	state state_t;
	Dut dut(contextp, top, _mif);
	ICache icache(_mif);
	DCache dcache(_mif);
	int count = 0;
	init(top, &dut, &icache, &dcache);
	while (count <= 1000 && !contextp->gotFinish())
	{
		step_one_cycle(&dut, &icache, &dcache);
		count += 1;
	}
    delete _mif;
	delete top;
	delete contextp;
	return 0;
}
