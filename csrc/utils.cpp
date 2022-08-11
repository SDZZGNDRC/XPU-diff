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

int elfloader(char *filepath, mif *mif_p)
{
    //std::cout << "File:" <<filepath << std::endl;
    assert(strlen(filepath) > 0);
	std::ifstream in(filepath, std::ios::in|std::ios::binary);
	char *buffer;
	unsigned int size, l, m;
	l = in.tellg();
	in.seekg(0, std::ios::end);
	m = in.tellg();
	size = m - l;
	buffer = (char *)malloc(size); 
	auto temp = buffer;
	in.seekg(0, std::ios::beg);
	in.read(buffer, size);
	in.close();
	uint64_t mbase, msize, total = 0;
	while(true)
	{
		mbase = bytes2uint(buffer);
		msize = bytes2uint(buffer+8);
    	mif_p->store(mbase, msize, (uint8_t*)(buffer+16));
		buffer = buffer+16+msize;
		total = total + 16 + msize;
		if(total >= size){
			break;
		}
	}
	delete temp;
  return 1;
}

void update_signals(Dut *dut_p, ICache *icache_p, DCache *dcache_p)
{
    /* ICache */
	icache_p->icache_addr_i = dut_p->icache_addr_o;
    icache_p->icache_req_valid_i = dut_p->icache_req_valid_o;
    
    /* DCache */
    dcache_p->dcache_addr_i = dut_p->dcache_addr_o;
    dcache_p->dcache_req_valid_i = dut_p->dcache_req_valid_o;
    dcache_p->dcache_wen_i = dut_p->dcache_wen_o;
    dcache_p->dcache_wdata_i = dut_p->dcache_wdata_o;
    dcache_p->dcache_wlen_i = dut_p->dcache_wlen_o;

    /* DUT */
    dut_p->icache_data_valid_i = icache_p->icache_data_valid_o;
    dut_p->icache_data_i = icache_p->icache_data_o;
    dut_p->dcache_ready_i = dcache_p->dcache_ready_o;
    dut_p->dcache_data_valid_i = dcache_p->dcache_data_valid_o;
    dut_p->dcache_data_i = dcache_p->dcache_data_o;
}

void step_one_cycle(Dut *dut_p, ICache *icache_p, DCache *dcache_p)
{
    dut_p->update_outputs();
    update_signals(dut_p, icache_p, dcache_p);
    dut_p->posedge();
    icache_p->posedge();
    dcache_p->posedge();
    update_signals(dut_p, icache_p, dcache_p);
    dut_p->update_inputs();
    dut_p->pass_time();
    dut_p->negedge();
}
