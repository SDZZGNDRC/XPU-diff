#include "DiffTest.h"

DiffTest::DiffTest(state* _state_p, Dut* _dut_p)
{
    state_p = _state_p;
    dut_p = _dut_p;
}

DiffTest::~DiffTest()
{
}

bool DiffTest::check_pc()
{
    if(dut_p->diff_mem_wb_pc_o != state_p->pc)
    {
        printf("\033[47;31mDIFF: dut_pc=0x%016lx    spike_pc=0x%016lx\033[0m\n", dut_p->diff_mem_wb_pc_o, state_p->pc);
        return false;
    }else
    {
        printf("DIFF: dut_pc=0x%016lx    spike_pc=0x%016lx\n", dut_p->diff_mem_wb_pc_o, state_p->pc);
            return true;
    }
}

