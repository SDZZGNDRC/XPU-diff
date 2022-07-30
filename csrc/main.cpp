#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "mif.h"

uint64_t bytes2uint(char* bytes)
{
	uint64_t a = *(uint64_t*)bytes;
	return a;
}

static int elfloader(mif* _mif, char *filepath)
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
/* 		std::cout << std::hex << mbase << std::endl;
		std::cout << std::dec << msize << std::endl;
		for (int i = 0; i <= msize/4; i++){
			std::cout << std::hex << std::setw(2) << std::setfill('0') << (int) static_cast <unsigned char>(*(buffer+16+4*i+3)) << ' ';
			std::cout << std::hex << std::setw(2) << std::setfill('0') << (int) static_cast <unsigned char>(*(buffer+16+4*i+2)) << ' ';
			std::cout << std::hex << std::setw(2) << std::setfill('0') << (int) static_cast <unsigned char>(*(buffer+16+4*i+1)) << ' ';
			std::cout << std::hex << std::setw(2) << std::setfill('0') << (int) static_cast <unsigned char>(*(buffer+16+4*i+0)) << ' ';
			std::cout << std::endl;
		} */
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

void init(Vtop* top, VerilatedContext* contextp)
{
	int init_cylces = 10;
	top->rst = 1;
	for(int i = 0; i < init_cylces; i++)
	{
		top->clk = 0;
		contextp->timeInc(1);
		top->eval();
		top->clk = 1;
		contextp->timeInc(1);
		top->eval();
	}
	top->rst = 0;
}

int main(int argc, char** argv, char** env)
{
    mif *_mif = new mif;
    elfloader(_mif, argv[1]);
	Verilated::mkdir("logs");
	VerilatedContext* contextp = new VerilatedContext;
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);
	Vtop* top = new Vtop{contextp};
	int count = 0;
	init(top, contextp);
	while (count <= 1000 && !contextp->gotFinish())
	{
		top->clk = 0;
		contextp->timeInc(1);
		top->eval();
		top->clk = 1;
		top->icache_data_valid_i = 1;
		if (top->icache_req_valid_o == 1 && top->icache_data_wen_o == 0){
			_mif->load(top->icache_addr_o, 4, (uint8_t*)&top->icache_data_i);
			printf("INST = 0x%08x\n", top->icache_data_i);
		}
		contextp->timeInc(1);
		top->eval();
		count += 1;
	}
    delete _mif;
	delete top;
	delete contextp;
	return 0;
}
