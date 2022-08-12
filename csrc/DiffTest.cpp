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
    printf("DIFF: dut_pc=0x%016lx\n", dut_p->diff_mem_wb_pc_o);
    std::cout << *(state_p) << std::endl;
    return true;
}

