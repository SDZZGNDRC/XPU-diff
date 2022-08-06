#include "utils.h"

std::vector<std::string> split(const std::string& str, const std::string& delimiter)
{
    std::size_t pos = 0;
    std::string token;
    std::string s = str;
    std::vector<std::string> ret;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        ret.emplace_back(token);
        s.erase(0, pos + delimiter.length());
    }
    return ret;
}

uint64_t bytes2uint(char* bytes)
{
	uint64_t a = *(uint64_t*)bytes;
	return a;
}
