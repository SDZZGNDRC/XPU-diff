#ifndef __LOGPARSER__
#define __LOGPARSER__
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string.h>
#include <assert.h>
#include "boost/variant/variant.hpp"
#include "boost/variant/get.hpp"
#include "utils.h"

struct commonInst
{
    reg_t pc;
    std::string machine_code;
    size_t rd;
    reg_t rd_new_value;
    commonInst() : pc(0), machine_code("None"), rd(0), rd_new_value(0) {}
    commonInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, ' ');
        std::vector<std::string> token2 = split(line2, ' ');
        assert(token1.size()>=5);
        assert(token2.size()>=7);
        assert(token1[2]==token2[3]);
        pc = stoul(token1[2].substr(2, token1[2].length()-2), NULL, 16);
        machine_code = token1[3].substr(1, token1[3].length()-2);
        if(token2[5].substr(0,1) == std::string("c"))
        {
            std::size_t p = token2[5].find('_');
            assert(p != std::string::npos);
            rd = -1;
            rd_new_value = stoul(token2[6].substr(2, token2[6].length()-2), NULL, 16);
        }else
        {
            rd = stoul(token2[5].substr(1, token2[5].length()-1), NULL, 10);
            rd_new_value = stoul(token2[6].substr(2, token2[6].length()-2), NULL, 16);
        }
    }
};

struct loadInst
{
    reg_t pc;
    std::string machine_code;
    reg_t mem_addr;
    reg_t mem_val;
    size_t rd;
    reg_t rd_new_value;
    loadInst() : pc(0), machine_code("None"), mem_addr(0), rd(0), rd_new_value(0) {}
    loadInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, ' ');
        std::vector<std::string> token2 = split(line2, ' ');
        assert(token1.size()>6);
        assert(token2.size()==11);
        assert(token1[2]==token2[3]);
        pc = stoul(token1[2].substr(2, token1[2].length()-2), NULL, 16);
        machine_code = token1[3].substr(1, token1[3].length()-2);
        mem_addr = stoul(token2[8].substr(2, token2[8].length()-2), NULL, 16);
        mem_val = stoul(token2[9].substr(2, token2[9].length()-2), NULL, 16);
        rd = stoul(token2[5].substr(1, token2[5].length()-1), NULL, 10);
        rd_new_value = stoul(token2[6].substr(2, token2[6].length()-2), NULL, 16);
    }
};

struct storeInst
{
    reg_t pc;
    std::string machine_code;
    reg_t mem_addr;
    reg_t mem_val;
    size_t mem_len;
    storeInst() : pc(0), machine_code("None"), mem_addr(0), mem_val(0), mem_len(0) {}
    storeInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, ' ');
        std::vector<std::string> token2 = split(line2, ' ');
        assert(token1.size()>6);
        assert(token2.size()==9);
        assert(token1[2]==token2[3]);
        pc = stoul(token1[2].substr(2, token1[2].length()-2), NULL, 16);
        machine_code = token1[3].substr(1, token1[3].length()-2);
        mem_addr = stoul(token2[6].substr(2, token2[6].length()-2), NULL, 16);
        mem_val = stoul(token2[7].substr(2, token2[7].length()-2), NULL, 16);
        mem_len = stoul(token2[8].substr(2, token2[8].length()-2), NULL, 16);
    }
};

struct branchInst
{
    reg_t pc;
    std::string machine_code;
    size_t rd;
    reg_t rd_new_value;
    branchInst() : pc(0), machine_code("None"), rd(0), rd_new_value(0) {}
    branchInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, ' ');
        std::vector<std::string> token2 = split(line2, ' ');
        assert(token1.size()>5);
        assert(token2.size()>=5);
        assert(token1[2]==token2[3]);
        pc = stoul(token1[2].substr(2, token1[2].length()-2), NULL, 16);
        machine_code = token1[3].substr(1, token1[3].length()-2);
        if(token2.size()==7){
            rd = stoul(token2[5].substr(1, token2[5].length()-1), NULL, 10);
            rd_new_value = stoul(token2[6].substr(2, token2[6].length()-2), NULL, 16);
        }else{
            rd = -1;
            rd_new_value = 0;
        }
    }
};

struct specialInst
{
    reg_t pc;
    std::string name;
    specialInst() : pc(0), name("None") {}
    specialInst(const std::string& line1, const std::string& line2)
    {
        assert(line1.length() > 0 && line2.length() > 0);
        std::vector<std::string> token1 = split(line1, ' ');
        std::vector<std::string> token2 = split(line2, ' ');
        assert(token1.size()>=5);
        assert(token2.size()>=4);
        pc = stoul(token1[2].substr(2, token1[2].length()-2), NULL, 16);
        name = token1[4];
    }
};


typedef boost::variant<commonInst, branchInst, loadInst, storeInst, specialInst> Inst;
enum InstType {
    COMMONINST,
    BRANCHINST,
    LOADINST,
    STOREINST,
    SPECIALINST
};


class Logparser
{
private:
    std::string logpath;
    std::vector<std::string> log_lines;
    std::vector<std::string> branch_insts={
        "beq", "bge", "bgeu", "blt", "bltu", 
        "bne", "bnez", "bgez", "bgt", "bgtu",
        "bgtz", "ble", "bleu", "blez", "bltz",
        "beqz", "jal", "jalr"
    };
    std::vector<std::string> load_insts={
        "lb", "lbu", "ld", "lh", "lhu",
        "lw", "lwu"
    };
    std::vector<std::string> store_insts={
        "sb", "sd", "sh", "sw"
    };
    std::vector<std::string> special_insts={
        "ecall", "fence", "fence.i"
    };
public:
    std::vector<std::pair<InstType, Inst>> traces;
    Logparser(const std::string& _logpath);
    ~Logparser();
    void paser();
};


#endif