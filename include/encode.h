#pragma once
#include "RISCV.h"
#define ICache_Miss_Rate 0.1
#define DCache_Miss_Rate 0.1
#define ICache_Reload_Cycle 10
#define DCache_Reload_Cycle 10
#define ICache_Miss_Delay 10
#define DCache_Miss_Delay 10
#define RESET_VALUE_PC 0x80000000
#define ECALL 0x00000073

#define CTRL_STATE_Default 0x0
#define CTRL_STATE_Block 0x1

/* VKSim */
#define VKSim_WINDOW_TITLE "VGA-Display"
#define VKSim_WINDOW_WIDTH   640
#define VKSim_WINDOW_HEIGHT  480
#define VKSim_WINDOW_NUMPIX  VKSim_WINDOW_WIDTH*VKSim_WINDOW_HEIGHT

/* #define NODIFF */

enum CacheState {
    Default,
    Block
};