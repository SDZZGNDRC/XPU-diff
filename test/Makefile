#RISCV_GCC := /home/sdzz/riscv/bin/riscv64-unknown-linux-gnu-gcc
RISCV_GCC := /home/sdzz/riscv/bin/riscv-none-embed-gcc
RISCV_GCC_OPTS ?= -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles
RISCV_OBJDUMP := /home/sdzz/riscv/bin/riscv-none-embed-objdump --disassemble-all --disassemble-zeroes --section=.text --section=.text.startup --section=.text.init --section=.data
RISCV_SIM := /home/sdzz/project/riscv-isa-sim/build/spike
OBJ_DIR = ./obj
objs := $(addprefix $(OBJ_DIR)/, $(patsubst %.S, %, $(notdir $(wildcard ./isa/rv64ui/*.S))))
RUN_TARGET ?= add

ifeq ($(wildcard $(OBJ_DIR)),)
$(shell mkdir -p $(OBJ_DIR))
endif

default : isa

run :
	$(RISCV_SIM) -l --priv=m --isa=rv64im --log-commits --log=log.txt -m128 $(OBJ_DIR)/$(RUN_TARGET) 2> $(RUN_TARGET).out

isa : $(objs)

$(objs):$(OBJ_DIR)/%:./isa/rv64ui/%.S
	$(RISCV_GCC) -march=rv64im -mabi=lp64 $(RISCV_GCC_OPTS) -I./env/p -I./isa/macros/scalar -T./env/p/link.ld $< -o $@
	$(RISCV_OBJDUMP) $@ > $@.dump
clean:
	rm -rf $(OBJ_DIR)

.PHONY: default, isa, run, clean
