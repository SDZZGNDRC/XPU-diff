#pragma once
#include "state.h"
#include "dut.h"

class DiffTest
{
private:
    state* state_p;
    Dut* dut_p;
public:
    DiffTest(state* _state_p, Dut* _dut_p);
    ~DiffTest();
    bool check_pc();
    bool check_regfiles();
};


