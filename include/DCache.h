#include "mif.h"
#include "encode.h"
#include <stdlib.h>

enum DCacheState {
    Default,
    Block
};

class DCache
{
private:
    mif *mif_p;

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

    DCacheState state = Default;

    uint8_t dcache_ready_o;
    uint8_t dcache_data_valid_o;
    reg_t dcache_data_o;
    size_t reload_delay_cycle = 0;
    bool reload_flag = false;
public:
    reg_t dcache_addr_i;
    uint8_t dcache_req_valid_i;
    uint8_t dcache_wen_i;
    reg_t dcache_wdata_i;
    uint8_t dcache_wlen_i;
    uint8_t ctrl_signal_i;
public:
    DCache(mif *_mif_p);
    ~DCache();
    uint8_t get_dcache_ready_o() { return dcache_ready_o; };
    uint8_t get_dcache_data_valid_o() { return dcache_data_valid_o; };
    reg_t get_dcache_data_o() { return dcache_data_o; };
    void posedge();
};




