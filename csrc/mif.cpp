#include "mif.h"
#include <iostream>

static std::vector<std::pair<reg_t, mem_t*>> make_mems(const std::vector<mem_cfg_t> &layout)
{
  std::vector<std::pair<reg_t, mem_t*>> mems;
  mems.reserve(layout.size());
  for (const auto &cfg : layout) {
    mems.push_back(std::make_pair(cfg.base, new mem_t(cfg.size)));
  }
  return mems;
}

mif::mif(const std::vector<mem_cfg_t> &layout)
{
    mems = make_mems(layout);
}

mif::mif()
{
    reg_t size = 1UL << 28; // SIZE=128MB
    std::vector<mem_cfg_t> res;
    res.push_back(mem_cfg_t(reg_t(DRAM_BASE), size));
    mems = make_mems(res);
}

mif::~mif()
{
    for (auto& mem : mems)
        delete mem.second;
}

bool mif::load(reg_t addr, size_t len, uint8_t* bytes)
{
    return load_store(addr, len, bytes, false);
}

bool mif::store(reg_t addr, size_t len, uint8_t* bytes)
{
    return load_store(addr, len, bytes, true);
}

bool mif::load_store(reg_t addr, size_t len, uint8_t* bytes, bool store)
{
    for(auto mem : mems)
    {
        if(mem.first <= addr && addr <= mem.first + mem.second->size())
        {
            if(store)
            {
              return mem.second->store(addr, len, bytes);
            }else
            {
              return mem.second->load(addr, len, bytes);
            }
        }
    }
    return false;
}

mem_t::mem_t(reg_t size)
  : sz(size)
{
    if (size == 0 || size % PGSIZE != 0)
        throw std::runtime_error("memory size must be a positive multiple of 4 KiB");
}

mem_t::~mem_t()
{
    for (auto& entry : sparse_memory_map)
        free(entry.second);
}

char* mem_t::contents(reg_t addr) {
    reg_t ppn = addr >> PGSHIFT, pgoff = addr % PGSIZE;
    auto search = sparse_memory_map.find(ppn);
    if (search == sparse_memory_map.end()) { // zero page
    auto res = (char*)calloc(PGSIZE, 1);
        if (res == nullptr)
        throw std::bad_alloc();
        sparse_memory_map[ppn] = res;
        return res + pgoff;
    }
    return search->second + pgoff;
}

bool mem_t::load_store(reg_t addr, size_t len, uint8_t* bytes, bool store)
{
  if (addr + len < addr || len > sz){
/*     std::cout << "mem_t::load_store> return false" << std::endl;
    std::cout << "addr=" << addr << " " << "len=" << len << " " << "sz=" << sz << std::endl; */
    return false;
  }
/*   std::cout << "addr == " << addr << std::endl; */
  while (len > 0) {
    auto n = std::min(PGSIZE - (addr % PGSIZE), reg_t(len));

    if (store)
      memcpy(this->contents(addr), bytes, n);
    else
      memcpy(bytes, this->contents(addr), n);

    addr += n;
    bytes += n;
    len -= n;
  }

  return true;
}


