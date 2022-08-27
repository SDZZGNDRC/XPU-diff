RISCV_GCC := /home/sdzz/riscv/bin/riscv-none-embed-gcc
RISCV_GCC_OPTS ?= -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles
RISCV_OBJDUMP := /home/sdzz/riscv/bin/riscv-none-embed-objdump --disassemble-all --disassemble-zeroes --section=.text --section=.text.startup --section=.text.init --section=.data
BUILD_DIR := ./build
TARGET_DIR ?= 
INC_PATH ?=  $(TARGET_DIR)/include ./include
INCFLAGS = $(addprefix -I, $(INC_PATH))
CSRCS = $(shell find $(abspath $(TARGET_DIR)/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
OBJ := $(addprefix $(BUILD_DIR)/, $(notdir $(TARGET_DIR)))
ININ_SRC = ../scripts/init.S

ifeq ($(wildcard $(BUILD_DIR)),)
$(shell mkdir -p $(BUILD_DIR))
endif

default : build

build : $(OBJ)

$(OBJ): $(CSRCS)
	$(RISCV_GCC) -march=rv64im -mabi=lp64 $(RISCV_GCC_OPTS) $(INCFLAGS) -c $(ININ_SRC) -o $(BUILD_DIR)/init.o
	$(RISCV_GCC) -march=rv64im -mabi=lp64 $(RISCV_GCC_OPTS) $(INCFLAGS) \
	-T../scripts/linker.ld $< $(BUILD_DIR)/init.o -o $@
	$(RISCV_OBJDUMP) $@ > $@.dump

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default, build, clean
