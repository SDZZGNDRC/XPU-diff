HOME_DIR = /home/sdzz/project/XPU-diff
TOPNAME = top
INC_PATH ?=  $(HOME_DIR)/include  /home/sdzz/boost/ $(HOME_DIR)/app/include

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
DIFF ?= yes

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS +=  -DTOP_NAME="\"V$(TOPNAME)\"" $(INCFLAGS)
LDFLAGS += -lSDL2

$(BIN): $(VSRCS) $(CSRCS)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
ifeq ($(DIFF),yes)
	$(SPIKE) $(SPIKE_FLAGS) $(ELF)
	$(PYTHON) genbin.py $(ELF) $(BUILD_DIR)/$(notdir $(ELF)).temp
	@$^ $(BUILD_DIR)/$(notdir $(ELF)).temp
else
	$(PYTHON) genbin.py $(ELF) $(BUILD_DIR)/$(notdir $(ELF)).temp
	@$^ $(BUILD_DIR)/$(notdir $(ELF)).temp
endif

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run