#pragma once
#include "mif.h"
#include "encode.h"
#include <stdlib.h>

class ICache
{
private:
    mif *mif_p;
    bool flag;

    reg_t icache_addr_i_t1 = 0;
    reg_t icache_addr_i_t2 = 0;
    uint8_t icache_req_valid_i_t1 = 0;
    uint8_t icache_req_valid_i_t2 = 0;

    CacheState state;
    reg_t count;

    size_t reload_delay_cycle = 0;
    bool reload_flag = false;
public:
    reg_t icache_addr_i; // The address received last cycle.
    uint8_t icache_req_valid_i;
    uint8_t ctrl_signal_i;

    uint8_t icache_data_valid_o;
    uint8_t icache_ready_o;
    reg_t icache_data_o;
public:
    ICache(mif *_mif_p);
    ~ICache();
    void posedge();
    bool is_blocking() { return state==Block; };
};


