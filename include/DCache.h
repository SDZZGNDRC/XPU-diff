#pragma once
#include "mif.h"
#include "encode.h"
#include <stdlib.h>
#include "VKSim.h"

class DCache
{
private:
    mif *mif_p;
    VKSim *vksim_p;
    bool flag;

    reg_t dcache_addr_i_t1;
    reg_t dcache_addr_i_t2;
    uint8_t dcache_req_valid_i_t1;
    uint8_t dcache_req_valid_i_t2;
    uint8_t dcache_wen_i_t1;
    uint8_t dcache_wen_i_t2;
    reg_t dcache_wdata_i_t1;
    reg_t dcache_wdata_i_t2;
    uint8_t dcache_wlen_i_t1;
    uint8_t dcache_wlen_i_t2;

    CacheState state;
    reg_t count;

    clock_t last_refresh;
    size_t reload_delay_cycle = 0;
    bool reload_flag = false;
    uint32_t *frame;
public:
    reg_t dcache_addr_i;
    uint8_t dcache_req_valid_i;
    uint8_t dcache_wen_i;
    reg_t dcache_wdata_i;
    uint8_t dcache_wlen_i;
    uint8_t ctrl_signal_i;

    uint8_t dcache_ready_o;
    uint8_t dcache_data_valid_o;
    reg_t dcache_data_o;
public:
    DCache(mif *_mif_p);
    ~DCache();
    void posedge();
    bool is_blocking() { return state==Block; };
};




