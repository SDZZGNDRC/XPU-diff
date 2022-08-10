#include "utils.h"
#include <cstring>

#define NXPR 32
#define DEFAULT_RESET_PC 0x80000000

template <class T, size_t N, bool zero_reg>
class regfile_t
{
public:
    void write(size_t i, T value)
    {
        if (!zero_reg || i != 0)
        data[i] = value;
    }
    const T& operator [] (size_t i) const
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
    T data[N];
};

struct state
{
    reg_t pc;
    regfile_t<reg_t, NXPR, true> XPR;
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
            std::cout << std::setw(6) << 'x' << i << ": " << std::hex << std::setw(16) << std::setfill('0') << t.XPR[i];
            if(i%4==3)
            {
                std::cout << std::endl;
            }
        }
        if(t.mem_update_valid)
        {
            std::cout << std::hex << std::setw(16) << std::setfill('0') << t.mem_update_addr << ": ";
            std::cout << std::hex << std::setw(16) << std::setfill('0') << t.mem_update_value << std::endl;
        }
        return os;
    };
};

