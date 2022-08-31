#include "DiffTest.h"

DiffTest::DiffTest(state* _state_p, Dut* _dut_p, DCache *_dcache_p, ICache *_icache_p)
{
    state_p = _state_p;
    dut_p = _dut_p;
    dcache_p = _dcache_p;
    icache_p = _icache_p;
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

bool DiffTest::check_mems()
{
    bool flag = true;
    if(state_p->mem_update_valid == true)
    {
        if(mem_store.rbegin()->first == state_p->mem_update_addr\
            && mem_store.rbegin()->second == state_p->mem_update_value)
        {
            ;
        }
        else
        {
            printf("\033[47;31mDIFF: dut_mem_addr: 0x%016lx    dut_mem_value: 0x%016lx\033[0m\n", \
            mem_store.rbegin()->first, mem_store.rbegin()->second);
            printf("\033[47;31mDIFF: spk_mem_addr: 0x%016lx    spk_mem_value: 0x%016lx\033[0m\n", \
            state_p->mem_update_addr, state_p->mem_update_value);
            flag = false;
        }
        mem_store.pop_back();
    }
    update_mem_store();
    return flag;
}

bool DiffTest::check_all()
{
    int sum = 0;
    bool ret;
    sum += check_pc();
    sum += check_regfiles();
    sum += check_mems();
    if(sum != 3)
    {
        printf("sum=%d\n", sum);
        ret = false;
    }
    else
    {
        ret = true;
    }
    return  ret;
}

void DiffTest::update_mem_store()
{
    if(dcache_p->is_blocking() || icache_p->is_blocking())
    {
        return;
    }
    if(dut_p->diff_dcache_req_valid_o == 1 && \
        dut_p->diff_dcache_wen_o == 1)
    {
/*         printf("diff_dcache_addr_o=0x%016lx, diff_dcache_wdata_o=0x%016lx\n", dut_p->diff_dcache_addr_o, dut_p->diff_dcache_wdata_o);
        printf("diff_dcache_req_valid_o=%d, diff_dcache_wen_o=%d\n", dut_p->diff_dcache_req_valid_o, dut_p->diff_dcache_wen_o); */
        mem_store.insert(mem_store.begin(), std::make_pair(dut_p->diff_dcache_addr_o, dut_p->diff_dcache_wdata_o));
    }
}

