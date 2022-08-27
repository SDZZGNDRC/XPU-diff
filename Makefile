HOME_DIR = /home/sdzz/project/XPU-diff
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=  $(HOME_DIR)/include  /home/sdzz/boost/ $(NVBOARD_HOME)/include

VERILATOR = verilator
VERILATOR_CFLAGS += -Wall --trace -MMD --build -cc  \
				-I./vsrc \
				-O3 --x-assign fast --x-initial fast --noassert

SPIKE = spike
SPIKE_FLAGS = -l --priv=m --isa=rv64im --log-commits --log=log.txt -m128 
PYTHON = python3

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

ELF ?=

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	$(PYTHON) $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS +=  -DTOP_NAME="\"V$(TOPNAME)\"" $(INCFLAGS)
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	# @rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	$(SPIKE) $(SPIKE_FLAGS) $(ELF)
	$(PYTHON) genbin.py $(ELF) $(BUILD_DIR)/$(notdir $(ELF)).temp
	@$^ $(BUILD_DIR)/$(notdir $(ELF)).temp
#	@rm log.txt

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run