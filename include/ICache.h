#include "mif.h"
#include "encode.h"
#include <stdlib.h>

enum ICacheState {
    Default,
    Block
};

class ICache
{
private:
    mif *mif_p;

    reg_t icache_addr_i_t1 = 0;
    reg_t icache_addr_i_t2 = 0;
    uint8_t icache_req_valid_i_t1 = 0;
    uint8_t icache_req_valid_i_t2 = 0;

    ICacheState state = Default;

    uint8_t icache_data_valid_o;
    uint8_t icache_ready_o;
    reg_t icache_data_o;
    size_t reload_delay_cycle = 0;
    bool reload_flag = false;
public:
    reg_t icache_addr_i = 0; // The address received last cycle.
    uint8_t icache_req_valid_i = 0;
    uint8_t ctrl_signal_i;
public:
    ICache(mif *_mif_p);
    ~ICache();
    uint8_t get_icache_data_valid_o(){ return icache_data_o; };
    uint8_t get_icache_ready_o() { return icache_data_o; }
    reg_t get_icache_data_o(){ return icache_data_o; };
    void posedge();
};


