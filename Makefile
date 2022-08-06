HOME_DIR = /home/sdzz/project/XPU-diff
TOPNAME = top
INC_PATH ?=  $(HOME_DIR)/include  /home/sdzz/boost/

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

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS +=  -DTOP_NAME="\"V$(TOPNAME)\"" $(INCFLAGS)

$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) \
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