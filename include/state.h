#pragma once
#include "utils.h"
#include <cstring>

#define NXPR 32
#define DEFAULT_RESET_PC 0x80000000

class regfile_t
{
public:
    void write(size_t i, reg_t value)
    {
        if ((int)i>0)
        {
            data[i] = value;
        }
        
    }
    const reg_t& operator [] (size_t i) const
    {
        return data[i];
    }
    regfile_t()
    {
        reset();
    }
    void reset()
    {
        memset(data, 0, sizeof(data));
    }
private:
    reg_t data[32];
};

struct state
{
    reg_t pc;
    regfile_t XPR;
    bool mem_update_valid;
    reg_t mem_update_addr;
    reg_t mem_update_value;
    size_t mem_update_len;
    state()
    {
        pc = 0;
        XPR.reset();
        mem_update_valid = false;
        mem_update_addr = 0;
        mem_update_value = 0;
        mem_update_len = 0;
    }
    friend std::ostream& operator<<(std::ostream& os, const state& t)
    {
        std::cout << "PC: " << std::hex << std::setw(16) << std::setfill('0') << t.pc << std::endl;
        for(size_t i=0; i < NXPR; i++)
        {
            if(t.XPR[i] != 0)
            {
                std::cout << '\t' << "\033[32m" << 'x' << std::dec << i << ": " << std::hex << std::setw(16) << std::setfill('0') << t.XPR[i] << "\033[0m";
            }
            else
            {
                std::cout << '\t' << 'x' << std::dec << i << ": " << std::hex << std::setw(16) << std::setfill('0') << t.XPR[i];
            }
            if(i%4==3)
            {
                std::cout << std::endl;
            }
        }
        if(t.mem_update_valid)
        {
            std::cout << "\033[33m" << "Update spike_mem: addr 0x" << std::hex << std::setw(16) << std::setfill('0') << t.mem_update_addr << " to ";
            std::cout << std::hex << std::setw(16) << std::setfill('0') << t.mem_update_value << "\033[0m" << std::endl;
        }
        return os;
    };
};

