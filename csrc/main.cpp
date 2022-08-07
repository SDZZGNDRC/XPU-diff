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

VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
mif *_mif = new mif; // The interface of the memory
Logparser logparser_t("./log.txt");
state state_t;
uint64_t icache_addr_t = 0x7ffffffc; // The address received last cycle.
uint64_t icache_addr = 0x7ffffffc; // The address received last cycle.

uint8_t icache_req_valid_o = 0;
uint8_t icache_wen_o = 0;


static int elfloader(char *filepath)
{
    //std::cout << "File:" <<filepath << std::endl;
    assert(strlen(filepath) > 0);
	std::ifstream in(filepath, std::ios::in|std::ios::binary);
	char *buffer;
	unsigned int size, l, m;
	l = in.tellg();
	in.seekg(0, std::ios::end);
	m = in.tellg();
	size = m - l;
	buffer = (char *)malloc(size); 
	auto temp = buffer;
	in.seekg(0, std::ios::beg);
	in.read(buffer, size);
	in.close();
	uint64_t mbase, msize, total = 0;
	while(true)
	{
		mbase = bytes2uint(buffer);
		msize = bytes2uint(buffer+8);
    	_mif->store(mbase, msize, (uint8_t*)(buffer+16));
		buffer = buffer+16+msize;
		total = total + 16 + msize;
		if(total >= size){
			break;
		}
	}
	delete temp;
  return 1;
}

bool update_state()
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

void init()
{
	int init_cylces = 10;
	top->rst = 1;
	for(int i = 0; i < init_cylces; i++)
	{
		icache_addr_t = top->icache_addr_o;
		icache_req_valid_o = top->icache_req_valid_o;
		icache_wen_o = top->icache_wen_o;
		/* =============POSEDGE-Start============== */
		top->clk = 1;
		top->eval_step();
		/* =============POSEDGE-End============== */
		top->icache_data_valid_i = 1;
		top->dcache_data_valid_i = 1;
		if (icache_req_valid_o == 1 && icache_wen_o == 0){
			_mif->load(icache_addr, 4, (uint8_t*)&top->icache_data_i);
			printf("ICACHE_ADDR_T = 0x%016lx\tINST = 0x%08x\n", icache_addr, top->icache_data_i);
		} else {
			top->icache_data_i = 0x0;
		}
		icache_addr = icache_addr_t;
		if(i == init_cylces-1){
			top->rst = 0;
		}
		contextp->timeInc(1);
		top->eval_step();
		top->eval_end_step();
/* 		top->eval(); */
		/* =============NEGEDGE============== */
		top->clk = 0;
		contextp->timeInc(1);
		top->eval();
	}
}

int main(int argc, char** argv, char** env)
{
    elfloader(argv[1]);
	Verilated::mkdir("logs");
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);
	int count = 0;

	init();
	while (count <= 1000 && !contextp->gotFinish())
	{
		icache_addr_t = top->icache_addr_o;
		icache_req_valid_o = top->icache_req_valid_o;
		icache_wen_o = top->icache_wen_o;
		/* =============POSEDGE-Start============== */
		top->clk = 1;
		top->eval_step();
		/* =============POSEDGE-End============== */
		top->icache_data_valid_i = 1;
		if (icache_req_valid_o == 1 && icache_wen_o == 0){
			_mif->load(icache_addr, 4, (uint8_t*)&top->icache_data_i);
			printf("ICACHE_ADDR_T = 0x%016lx\tINST = 0x%08x\n", icache_addr, top->icache_data_i);
		} else {
			top->icache_data_i = 0x0;
		}
		icache_addr = icache_addr_t;
		contextp->timeInc(1);
		top->eval_step();
		top->eval_end_step();
/* 		top->eval(); */
		/* =============NEGEDGE============== */
		top->clk = 0;
		contextp->timeInc(1);
		top->eval();
		count += 1;
	}
    delete _mif;
	delete top;
	delete contextp;
	return 0;
}
