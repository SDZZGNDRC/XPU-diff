#ifndef __LOGPARSER__
#define __LOGPARSER__
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string.h>
#include <assert.h>
#include "boost/variant/variant.hpp"

#include "utils.h"

struct commonInst
{
    std::string pc;
    std::string machine_code;
    std::string rd;
    std::string rd_new_value;
    commonInst() : pc("Invalid PC"), machine_code("None"), rd("None"), rd_new_value("None") {}
    commonInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, std::string(" "));
        std::vector<std::string> token2 = split(line2, std::string(" "));
        assert(token1.size()>=5);
        assert(token2.size()==7);
        assert(token1[2]==token2[3]);
        pc = token1[2];
        machine_code = token1[3].substr(1, token1[3].length()-2);
        if(token2[5].substr(0,1) == std::string("c"))
        {
            std::size_t p = token2[5].find('_');
            assert(p != std::string::npos);
            rd = token2[5].substr(p+1, token2[5].length()-p-1);
            rd_new_value = token2[6];
        }else
        {
            rd = token2[5];
            rd_new_value = token2[6];
        }
    }
};

struct loadInst
{
    std::string pc;
    std::string machine_code;
    std::string mem_addr;
    std::string mem_val;
    std::string rd;
    std::string rd_new_value;
    loadInst() : pc("Invalid PC"), machine_code("None"), mem_addr("None"), rd("None"), rd_new_value("None") {}
    loadInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, std::string(" "));
        std::vector<std::string> token2 = split(line2, std::string(" "));
        assert(token1.size()>6);
        assert(token2.size()==11);
        assert(token1[2]==token2[3]);
        pc = token1[2];
        machine_code = token1[3].substr(1, token1[3].length()-2);
        mem_addr = token2[8];
        mem_val = token2[9];
        rd = token2[5];
        rd_new_value = token2[6];
    }
};

struct storeInst
{
    std::string pc;
    std::string machine_code;
    std::string mem_addr;
    std::string mem_val;
    storeInst() : pc("Invalid PC"), machine_code("None"), mem_addr("None"), mem_val("None") {}
    storeInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, std::string(" "));
        std::vector<std::string> token2 = split(line2, std::string(" "));
        assert(token1.size()>6);
        assert(token2.size()==8);
        assert(token1[2]==token2[3]);
        pc = token1[2];
        machine_code = token1[3].substr(1, token1[3].length()-2);
        mem_addr = token2[6];
        mem_val = token2[7];
    }
};

struct branchInst
{
    std::string pc;
    std::string machine_code;
    std::string rd;
    std::string rd_new_value;
    branchInst() : pc("None"), machine_code("None"), rd("None"), rd_new_value("None") {}
    branchInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, std::string(" "));
        std::vector<std::string> token2 = split(line2, std::string(" "));
        assert(token1.size()>5);
        assert(token2.size()>=5);
        assert(token1[2]==token2[3]);
        pc = token1[2];
        machine_code = token1[3].substr(1, token1[3].length()-2);
        if(token2.size()==7){
            rd = token2[5];
            rd_new_value = token2[6];
        }else{
            rd = "None";
            rd_new_value = "None";
        }
    }
};

struct specialInst
{
    std::string pc;
    std::string name;
    specialInst() : pc("None"), name("None") {}
    specialInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, std::string(" "));
        std::vector<std::string> token2 = split(line2, std::string(" "));
        assert(token1.size()>=5);
        assert(token2.size()>=4);
        pc = token1[2];
        name = token1[4];
    }
};


typedef boost::variant<commonInst, branchInst, loadInst, storeInst, specialInst> Inst;

class Logparser
{
private:
    std::string logpath;
    std::vector<std::string> log_lines;
    std::vector<std::string> branch_insts={
        "beq", "bge", "bgeu", "blt", "bltu", 
        "bne", "jal", "jalr"
    };
    std::vector<std::string> load_insts={
        "lb", "lbu", "ld", "lh", "lhu",
        "lw", "lwu"
    };
    std::vector<std::string> store_insts={
        "sb", "sd", "sh", "sw"
    };
    std::string finished_inst="ecall";
public:
    std::vector<Inst> traces;
    Logparser(const std::string& _logpath);
    ~Logparser();
    void paser();
};


#endif