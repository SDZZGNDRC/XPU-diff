#include "utils.h"

std::vector<std::string> split(const std::string& str, char delimiter)
{
    std::size_t pos = 0;
    std::string token;
    std::string s = str;
    std::vector<std::string> ret;
    size_t i = 0;
    while (i < s.length())
    {
        if(s[i] == delimiter)
        {
            i += 1;
            continue;
        }else
        {
            size_t j = i;
            while(s[j] != delimiter and j < s.length())
            {
                j += 1;
            }
            token = s.substr(i, j-i);
            i = j;
            ret.emplace_back(token);
        }
    }
    return ret;
}

uint64_t bytes2uint(char* bytes)
{
	uint64_t a = *(uint64_t*)bytes;
	return a;
}
