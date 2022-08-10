#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <iomanip>
#include <assert.h>
#include "mif.h"

typedef uint64_t reg_t;

std::vector<std::string> split(const std::string& str, char delimiter);
uint64_t bytes2uint(char* bytes);

static int elfloader(char *filepath, mif *mif_p);
