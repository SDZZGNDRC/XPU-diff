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

bool DiffTest::check_regfiles()
{
    bool flag = true;
    std::cout << *state_p << std::endl;
    for(int i = 0; i < 32; i++)
    {
        if(i==(int)dut_p->diff_mem_wb_back_rd_addr_o \
            && dut_p->diff_mem_wb_back_wreg_o==1)
        {
            if(dut_p->diff_mem_wb_back_wdata_o != state_p->XPR[i] && i != 0)
            {
                printf("\033[47;31mDIFF: dut_x%02d=0x%016lx    spike_x%02d=0x%016lx\033[0m\n", \
                i, dut_p->diff_mem_wb_back_wdata_o, i, state_p->XPR[i]);
                flag = false;
            }
            else
            {
                continue;
            }
        }
        else if(*(dut_p->diff_regs_o+i)!=state_p->XPR[i])
        {
            printf("\033[47;31mDIFF: dut_x%02d=0x%016lx    spike_x%02d=0x%016lx\033[0m\n", \
            i, *(dut_p->diff_regs_o+i), i, state_p->XPR[i]);
            flag = false;
        }
    }
    /* std::cout << state_p << std::endl; */
    return flag;
}

