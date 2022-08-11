#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <iomanip>
#include <assert.h>
#include "mif.h"
#include "dut.h"
#include "ICache.h"
#include "DCache.h"

typedef uint64_t reg_t;

std::vector<std::string> split(const std::string& str, char delimiter);
uint64_t bytes2uint(char* bytes);

int elfloader(char *filepath, mif *mif_p);

void update_signals(Dut *dut_p, ICache *icache_p, DCache *dcache_p);

void step_one_cycle(Dut *dut_p, ICache *icache_p, DCache *dcache_p);

