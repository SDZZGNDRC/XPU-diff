`ifndef defines
`define RstEnable 1'b0
`define RstDisable 1'b1
`define Byte_Zero 8'd0
`define ZeroWord 32'h00_00_00_00
`define Invalid_pc 64'h00_00_00_00_00_00_00_00
`define Init_pc 64'h00_00_00_00_80_00_00_00
`define Doubel_Zero_Word 64'h00_00_00_00_00_00_00_00
`define RamMemNum 160 + 3 - 1 : 0
`define WriteEnable 1'b1
`define WriteDisable 1'b0
`define ReadEnable 1'b1
`define ReadDisable 1'b0
`define Uart_Unstarted 1'b0
`define Uart_Started 1'b1
`define Uart_trans_Unbusy 1'b0
`define Uart_trans_Busy 1'b1
`define Uart_trans_Valid 1'b1
`define Uart_trans_Invalid 1'b0
`define OpcodeBus 6:0
`define FunctBus3 2:0
`define FunctBus7 6:0
`define True_v 1'b1
`define False_v 1'b0
`define Byte 7:0
`define ChipEnable 1'b1
`define ChipDisable 1'b0
`define Invalid_offset12 12'b0000_0000_0000
`define Invalid_offset20 20'b0000_0000_0000

`define EX_stall_state1 2'b00
`define EX_stall_state2 2'b01
`define EX_stall_state3 2'b10

`define Opcode_B_type 7'b110_0011
`define Opcode_InValid 7'b000_0000
`define Opcode_I_type_load 7'b000_0011
`define Opcode_I_type_imm 7'b001_0011
`define Opcode_I_type_prv 7'b111_0011
`define Opcode_I_type_jalr 7'b110_0111
`define Opcode_I_type_word 7'b001_1011
`define Opcode_J_type_jal 7'b110_1111
`define Opcode_J_type 7'b110_1111
`define Opcode_R_type 7'b011_0011
`define Opcode_R_type_imm 7'b001_0011
`define Opcode_R_I_type_imm 7'b001_0011
`define Opcode_R_type_word 7'b011_1011
`define Opcode_S_type 7'b010_0011
`define Opcode_U_type_lui 7'b011_0111
`define Opcode_U_type_auipc 7'b001_0111

`define funct3_InValid 3'b000
`define funct3_add_sub_mul 3'b000
`define funct3_sll_mulh 3'b001
`define funct3_slt_mulhsu 3'b010
`define funct3_sltu_mulhu 3'b011
`define funct3_add_sub 3'b000
`define funct3_add 3'b000
`define funct3_addw_subw 3'b000
`define funct3_addw_subw_mulw 3'b000
`define funct3_addw_subw 3'b000
`define funct3_addi 3'b000
`define funct3_addiw 3'b000
`define funct3_and 3'b111
`define funct3_andi 3'b111 
`define funct3_beq 3'b000
`define funct3_bge 3'b101
`define funct3_bgeu 3'b111
`define funct3_blt 3'b100
`define funct3_bltu 3'b110
`define funct3_blu 3'b110
`define funct3_bne 3'b001
`define funct3_csrrc 3'b011
`define funct3_csrrci 3'b111
`define funct3_csrrs 3'b010
`define funct3_csrrsi 3'b110
`define funct3_csrrw 3'b001
`define funct3_csrrwi 3'b101
`define funct3_div 3'b100  // signed; signed
`define funct3_divu 3'b101  // unsigned; unsigned
`define funct3_divuw 3'b101  // unsigned; unsigned
`define funct3_divw 3'b100  // signed; signed
`define funct3_jalr 3'b000
`define funct3_lb 3'b000
`define funct3_lbu 3'b100
`define funct3_ld 3'b011
`define funct3_lh 3'b001
`define funct3_lhu 3'b101
`define funct3_lw 3'b010
`define funct3_lwu 3'b110
`define funct3_mul 3'b000  // signed; signed
`define funct3_mulh 3'b001  // signed; signed
`define funct3_mulhsu 3'b010  // signed; unsigned
`define funct3_mulhu 3'b011  // unsigned; unsigned
`define funct3_mulw 3'b000  // signed; signed
`define funct3_or_rem 3'b110
`define funct3_or 3'b110
`define funct3_ori 3'b110
`define funct3_rem 3'b110
`define funct3_remu 3'b111
`define funct3_remuw 3'b111
`define funct3_remw 3'b110
`define funct3_sb 3'b000
`define funct3_sd 3'b011
`define funct3_sh 3'b001
`define funct3_sw 3'b010
`define funct3_slli 3'b001
`define funct3_slliw 3'b001
`define funct3_slti 3'b010
`define funct3_sltiu 3'b011 
`define funct3_srli 3'b101
`define funct3_srai 3'b101
`define funct3_srai_srli 3'b101
`define funct3_sraiw_srliw 3'b101
`define funct3_sub 3'b000
`define funct3_sll 3'b001
`define funct3_sllw 3'b001
`define funct3_slt 3'b010
`define funct3_sltu 3'b011
`define funct3_srl 3'b101
`define funct3_sra 3'b101
`define funct3_sra_srl 3'b101
`define funct3_sraw_srlw 3'b101
`define funct3_xor_div 3'b100
`define funct3_xor 3'b100
`define funct3_xori 3'b100

`define funct6_srai 6'b01_0000
`define funct6_srli 6'b00_0000

`define funct7_InValid 7'b000_0000
`define funct7_add 7'b000_0000
`define funct7_addw 7'b000_0000
`define funct7_and 7'b000_0000
`define funct7_div 7'b000_0001
`define funct7_MULDIV 7'b000_0001
`define funct7_mul 7'b000_0001
`define funct7_mulh 7'b000_0001
`define funct7_mulhsu 7'b000_0001
`define funct7_or 7'b000_0000
`define funct7_rem 7'b000_0001
`define funct7_sll 7'b000_0000
`define funct7_sllw 7'b000_0000
`define funct7_slt 7'b000_0000
`define funct7_sltu 7'b000_0000
`define funct7_sra 7'b010_0000
`define funct7_sraiw 7'b010_0000
`define funct7_sraw 7'b010_0000
`define funct7_srl 7'b000_0000
`define funct7_srlw 7'b000_0000
`define funct7_sub 7'b010_0000
`define funct7_subw 7'b010_0000
`define funct7_xor 7'b000_0000

//ABI_define
`define reg_zero 5'b0_0000

`define AddrBus 63:0
`define DataBus 63:0
`define InstBus 31:0
`define funct3Bus 2:0
`define funct7Bus 6:0
`define Offset12Bus 11:0
`define Offset20Bus 19:0
`define InstMemNum 131071
`define InstMemNumLog2 17

`define CSRAddrBus 11:0
`define CSRAddrLen 12
`define CSR_Addr_cycle 12'hC00
`define CSR_Addr_time 12'hC01
`define CSR_Addr_instret 12'hC02
`define CSR_Addr_mstatus 12'h300
`define CSR_Addr_misa 12'h301
`define CSR_Addr_mie 12'h304
`define CSR_Addr_mtvec 12'h305
/* `define CSR_Addr_mtimecmp 12'h321 */
`define CSR_Addr_mscratch 12'h340
`define CSR_Addr_mepc 12'h341
`define CSR_Addr_mcause 12'h342
`define CSR_Addr_mtval 12'h343
`define CSR_Addr_mip 12'h344
`define CSR_Addr_mcpuid 12'hF00
`define CSR_Addr_mvendorid 12'hF11
`define CSR_Addr_marchid 12'hF12
`define CSR_Addr_mimpid 12'hF13
`define CSR_Addr_mhartid 12'hF14

`define CSR_Hardwire_marchid 64'h0
`define CSR_Hardwire_mcpuid 64'h0
`define CSR_Hardwire_mhartid 64'h0
`define CSR_Hardwire_mimpid 64'h0
`define CSR_Hardwire_misa 64'h0
`define CSR_Hardwire_mtvec 64'h100
`define CSR_Hardwire_mvendorid 64'h0

`define CSR_Reset_cycle 64'h0
`define CSR_Reset_time 64'h0
`define CSR_Reset_instret 64'h0
`define CSR_Reset_mtval 64'h0
`define CSR_Reset_mcause_interrupt 1'b0
`define CSR_Reset_mcause_code 5'h0
`define CSR_Reset_mepc_H62 62'h0
`define CSR_Reset_mie_mtie 1'b0
`define CSR_Reset_mie_msie 1'b0
`define CSR_Reset_mip_mtip 1'b0
`define CSR_Reset_mip_msip 1'b0
`define CSR_Reset_mscratch 64'h0
`define CSR_Reset_mstatus_ie1 1'b0
`define CSR_Reset_mstatus_ie 1'b0
/* `define CSR_Reset_mtime 64'h0
`define CSR_Reset_mtimecmp_L32 32'h0 */

`define RegAddrBus 4:0
`define HalfRegBus 31:0
`define RegBus 63:0
`define Double_RegBus 127:0
`define ImmBus 19:0
`define ImmBus12 11:0
`define ShamtBus 5:0
`define Stall_Bus 5:0
`define Imm_zero 20'd0
`define Imm_sel_12bit 1'b0
`define Imm_sel_20bit 1'b1
`define Offset_sel_12bit 1'b0
`define Offset_sel_20bit 1'b1
`define Not_branched 1'b0
`define Branched 1'b1
`define Not_stalled 1'b0
`define Stalled 1'b1
`define Not_cleaned 1'b0
`define Cleaned 1'b1
`define NOP 32'h00_00_00_13

`define GPIO_Bus 31:0

`define RegWidth 64
`define RegNum 32
`define RegNumLog2 5

`define FSM_Wire_Bus                3:0
`define FSM_STATE_Default           4'd0
`define FSM_STATE_DBlock            4'd1
`define FSM_STATE_IBlock            4'd2
`define FSM_STATE_Branch            4'd3
`define FSM_STATE_Branch_IBlock     4'd4
`define FSM_STATE_EXBlock           4'd5

`define CTRL_Wire_Bus 1:0
`define CTRL_STATE_Default 2'd0
`define CTRL_STATE_Block 2'd1
`define CTRL_STATE_Bubble 2'd2
`define CTRL_STATE_Branch 2'd3

`define MULDIV_SIGN 1'b1
`define MULDIV_UNSIGN 1'b0

`define IRAM_Wdata_Bus  31:0
`define IRAM_Addr_Bus   9:0
`define IRAM_Wdata_Field  31:0
`define IRAM_Addr_Field   11:2

`define DRAM_Wdata_Bus  63:0
`define DRAM_Rdata_Bus  63:0
`define DRAM_Addr_Bus   9:0
`define DRAM_Wdata_Field  63:0
`define DRAM_Addr_Field   11:2
`define DRAM_State_Read       8'b0000_0000
`define DRAM_State_Wen_sb     8'b0000_0001
`define DRAM_State_Wen_sh     8'b0000_0011
`define DRAM_State_Wen_sw     8'b0000_1111
`define DRAM_State_Wen_sd     8'b1111_1111


`define ADDR_device_field    44'h0_00_00_00_00_02
`define ADDR_iram_field    44'h0_00_00_00_00_01
`define ADDR_dram_field    44'h0_00_00_00_00_00

`define ADDR_uart_field     12'h0_00
`define ADDR_gpio_field     12'h0_04


`define DEBUG_reg1_value 64'h11
`define DEBUG_reg2_value 64'h22
`define DEBUG_reg3_value 64'h33
`define DEBUG_led_bus 2:0

`endif
