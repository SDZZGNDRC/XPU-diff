#include "ICache.h"

ICache::ICache(mif *_mif_p)
{
    /* srand((unsigned int)(time(NULL))); */
    mif_p = _mif_p;
    state = Default;
    flag = true;
    count = 0;
}

ICache::~ICache()
{
}


void ICache::posedge()
{
    /* Change the state according to the input */
    if(ctrl_signal_i == CTRL_STATE_Block)
    {
        state = Block;
#ifndef NODIFF
        printf("ICache: Block\n");
#endif
        return;
    }else if(ctrl_signal_i == CTRL_STATE_Default)
    {
        state = Default;
        /* printf("ICache: Default\n"); */
    }
    if(reload_flag)
    {
        reload_delay_cycle += 1;
        if(reload_delay_cycle == ICache_Reload_Cycle)
        {
            icache_ready_o = 1;
        }
        if(reload_delay_cycle>ICache_Reload_Cycle)
        {
            reload_flag = false;
            reload_delay_cycle = 0;
            flag = false;
        }
        else
        {
            return;
        }
    }
/*     if (state == Block)
    {
        return;
    } */
    
    /* Get the input for the sequential circuit */
    if(flag)
    {
        icache_addr_i_t2 = icache_addr_i_t1;
        icache_req_valid_i_t2 = icache_req_valid_i_t1;

        icache_addr_i_t1 = icache_addr_i;
        icache_req_valid_i_t1 = icache_req_valid_i;
    }

    /* Drive the output */
    if(count <= ICache_Miss_Delay)
    {
        count++;
    }
    if(rand()%100<((int)(ICache_Miss_Rate*100)) && flag && count > ICache_Miss_Delay)
    {
        reload_delay_cycle = 0;
        reload_flag = true;
        icache_data_o = 0;
        icache_data_valid_o = 0;
        icache_ready_o = 0;
#ifndef NODIFF
        printf("\033[34mICache: Load Missing\033[0m\n");
#endif
    }else
    {
        mif_p->load(icache_addr_i_t2, 4, (uint8_t*)(&icache_data_o));
        /* printf("ICache: Load 0x%016lx\n", icache_addr_i_t2); */
        icache_data_valid_o = 1;
        icache_ready_o = 1;
    }
    if(!flag)
    {
        flag = true;
    }
/*     printf("Debug: icache_addr_i=0x%016lx\ticache_addr_i_t1=0x%016lx\ticache_addr_i_t2=0x%016lx\n", \
            icache_addr_i, icache_addr_i_t1, icache_addr_i_t2); */
}


