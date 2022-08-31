#pragma once
#include "state.h"
#include "dut.h"
#include <vector>
#include <utility>

class DiffTest
{
private:
    state* state_p;
    Dut* dut_p;
    DCache *dcache_p;
    ICache *icache_p;
    std::vector<std::pair<reg_t, reg_t>> mem_store;
public:
    DiffTest(state* _state_p, Dut* _dut_p, DCache *_dcache_p, ICache *_icache_p);
    ~DiffTest();
    bool check_pc();
    bool check_regfiles();
    bool check_mems();
    bool check_all();
    void update_mem_store();
};


