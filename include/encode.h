#pragma once
#define ICache_Miss_Rate 0.01
#define DCache_Miss_Rate 0.01
#define ICache_Reload_Cycle 10
#define DCache_Reload_Cycle 10
#define RESET_VALUE_PC 0x80000000
#define ECALL 0x00000073

#define CTRL_STATE_Default 0x0
#define CTRL_STATE_Block 0x1

enum CacheState {
    Default,
    Block
};