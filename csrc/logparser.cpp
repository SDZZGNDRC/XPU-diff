#include "logparser.h"
Logparser::Logparser(const std::string& _logpath)
{
    logpath = _logpath;
    std::ifstream infile;
    infile.open(logpath, std::ios::in);
    if(!infile.is_open()){
        std::cout << "Failed to opne file " << logpath << std::endl;
        assert(0);
    }
    std::string buf;
    while(getline(infile, buf)){
        log_lines.emplace_back(buf);
    }
    infile.close();
}

Logparser::~Logparser()
{
}

void Logparser::paser()
{
    std::size_t len = log_lines.size();
    for(std::size_t i = 0; i < len; )
    {
        assert(i != len-1);
        if(log_lines[i].find(">>>>") == std::string::npos)
        {
            i += 1;
            continue;
        }
        std::string name = split(log_lines[i], " ")[4];
        if(std::find(branch_insts.begin(), branch_insts.end(), name)!=branch_insts.end())
        {
            traces.emplace_back(branchInst(log_lines[i], log_lines[i+1]));
        }else if(std::find(load_insts.begin(), load_insts.end(), name)!=load_insts.end())
        {
            traces.emplace_back(loadInst(log_lines[i], log_lines[i+1]));
        }else if(std::find(store_insts.begin(), store_insts.end(), name)!=store_insts.end())
        {
            traces.emplace_back(storeInst(log_lines[i], log_lines[i+1]));
        }else if(name==finished_inst)
        {
            traces.emplace_back(specialInst(log_lines[i], log_lines[i+1]));
            break;
        }else
        {
            traces.emplace_back(commonInst(log_lines[i], log_lines[i+1]));
        }
        i += 2;
    }
}
