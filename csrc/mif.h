#ifndef __MIF__
#define __MIF__

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string.h>
#include <assert.h>

typedef uint64_t reg_t;

#define DEFAULT_WIDTH 64
#define DEFAULT_MEMLAYOUT std::make_pair(0x80000000, 0x40000000)
#define PGSHIFT 12
#define PGSIZE (1UL << PGSHIFT)
#define DRAM_BASE          0x80000000

class mem_t {
 public:
  mem_t(reg_t size);
  mem_t(const mem_t& that) = delete;
  ~mem_t();

  bool load(reg_t addr, size_t len, uint8_t* bytes) { return load_store(addr, len, const_cast<uint8_t*>(bytes), false); }
  bool store(reg_t addr, size_t len, const uint8_t* bytes) { return load_store(addr, len, const_cast<uint8_t*>(bytes), true); }
  char* contents(reg_t addr);
  reg_t size() { return sz; }

 private:
  bool load_store(reg_t addr, size_t len, uint8_t* bytes, bool store);

  std::map<reg_t, char*> sparse_memory_map;
  reg_t sz;
};

// Configuration that describes a memory region
class mem_cfg_t
{
public:
  mem_cfg_t(reg_t base, reg_t size)
    : base(base), size(size)
  {
    // The truth of these assertions should be ensured by whatever is creating
    // the regions in the first place, but we have them here to make sure that
    // we can't end up describing memory regions that don't make sense. They
    // ask that the page size is a multiple of the minimum page size, that the
    // page is aligned to the minimum page size, that the page is non-empty and
    // that the top address is still representable in a reg_t.
    assert((size % PGSIZE == 0) &&
           (base % PGSIZE == 0) &&
           (base + size > base));
  }

  reg_t base;
  reg_t size;
};

class mif
{
private:
    int WIDTH = DEFAULT_WIDTH;
    std::vector<std::pair<reg_t, mem_t*>> mems;
public:
    mif(const std::vector<mem_cfg_t> &layout);
    mif();
    ~mif();

    bool load(reg_t addr, size_t len, uint8_t *bytes);
    bool store(reg_t addr, size_t len, uint8_t *bytes);
    bool load_store(reg_t addr, size_t len, uint8_t *bytes, bool store);
};

#endif
