`include "defines.v"
`include "MuxKey.v"
/* (* DONT_TOUCH= "true" *) */
module ID
(
	input wire rst,  //复位信号
	input wire[`InstBus] inst_i,  //来自 ram 的指令

	//Data of ram
	input wire[`RegBus] rs1_data_i,  //源寄存器1的数据输入
	input wire[`RegBus] rs2_data_i,  //源寄存器2的数据输入
	input wire[`RegBus] ex_back_wdata_i,                    //数据前推
	input wire[`RegAddrBus] ex_back_rd_addr_i,              //数据前推
	input wire ex_back_wreg_i,                              //数据前推
	input wire[`RegBus] mem_back_wdata_i,                   //数据前推
	input wire[`RegAddrBus] mem_back_rd_addr_i,             //数据前推
	input wire mem_back_wreg_i,                             //数据前推
	input wire[`RegBus] mem_wb_back_wdata_i,                //数据前推
	input wire[`RegAddrBus] mem_wb_back_rd_addr_i,          //数据前推
	input wire mem_wb_back_wreg_i,                          //数据前推
	input wire[`AddrBus] pc_i,

	output wire[`RegAddrBus] rs1_addr_o,  //源寄存器 rs1 的地址: 输入到 regfile 模块,用于读取rs1
	output wire[`RegAddrBus] rs2_addr_o,  //源寄存器 rs2 的地址: 输入到 regfile 模块,用于读取rs2

	//译码的输出结果
/* 	output wire rs1_read_o,                         //标志位: 是否使用源寄存器1的数据
	output wire rs2_read_o,                         //标志位: 是否使用源寄存器2的数据 */
	output wire[`OpcodeBus] opcode_o,               //译码结果: 操作码
	output wire[`FunctBus3] funct3_o,               //译码结果: 3位宽操作码附加段
	output wire[`FunctBus7] funct7_o,               //译码结果: 7位宽操作码附加段
	output wire[`RegBus] rs1_data_o,                //源寄存器1的数据输出
	output wire[`RegBus] rs2_data_o,                //源寄存器2的数据输出
	output wire[`RegAddrBus] rd_addr_o,             //目标寄存器 rd 的地址
	output wire wreg_o,                             //标志位: 是否使用目标寄存器 rd
	output wire[`ImmBus] imm_o,                     //立即数 (注意: 由于risc-v指令集中的立即数有两种位宽<12/20>, 根据实际指令的不同进行选择,选择标志位为 imm_sel_o, 执行模块EX应根据 imm_sel 选择是否从低位到高位截取imm_o)
/* 	output wire imm_sel_o,                          //立即数位宽选择标志位: 1'b0 => 位宽12  1'b1 => 位宽20 */
/* 	output wire[`ShamtBus] shamt_o,
	output wire[`Offset12Bus] offset12_o,
	output wire[`Offset20Bus] offset20_o,
	output wire offset_sel_o, */
	output wire[`AddrBus] pc_o

);
/* rs1_addr_o rs2_addr_o opcode_o funct3_o funct7_o */
	assign rs1_addr_o = inst_i[19:15];
	assign rs2_addr_o = inst_i[24:20];
	assign opcode_o = inst_i[6:0];
	assign funct3_o = inst_i[14:12];
	assign funct7_o = inst_i[31:25];

/* rs1_data_o */
	assign rs1_data_o = (rs1_addr_o == `reg_zero) ? `Doubel_Zero_Word : 
						(rs1_addr_o == ex_back_rd_addr_i && ex_back_wreg_i == `WriteEnable) ? ex_back_wdata_i : 
						(rs1_addr_o == mem_back_rd_addr_i && mem_back_wreg_i == `WriteEnable) ? mem_back_wdata_i : 
						(rs1_addr_o == mem_wb_back_rd_addr_i && mem_wb_back_wreg_i == `WriteEnable) ? mem_wb_back_wdata_i : 
						(rs1_data_i);

/* rs2_data_o */
	assign rs2_data_o = (rs2_addr_o == `reg_zero) ? `Doubel_Zero_Word : 
						(rs2_addr_o == ex_back_rd_addr_i && ex_back_wreg_i == `WriteEnable) ? ex_back_wdata_i : 
						(rs2_addr_o == mem_back_rd_addr_i && mem_back_wreg_i == `WriteEnable) ? mem_back_wdata_i : 
						(rs2_addr_o == mem_wb_back_rd_addr_i && mem_wb_back_wreg_i == `WriteEnable) ? mem_wb_back_wdata_i : 
						(rs2_data_i);

/* rd_addr_o */
	assign rd_addr_o = inst_i[11:7];

/* imm_o */
	MuxKeyWithDefault #(3, 7, 20) mux1 (imm_o, opcode_o, {8'b0000_0000, inst_i[31:20]}, {
		`Opcode_J_type_jal, {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]},
		`Opcode_U_type_auipc, inst_i[31:12],
		`Opcode_U_type_lui, inst_i[31:12]
	});

/* pc_o */
	assign pc_o = pc_i;

/* 	reg[6:0] opcode;  //操作码
	reg[2:0] funct3;  //3位宽操作码附加段
	reg[6:0] funct7;  //7位宽操作码附加段

	//initial decode
	always @(*) begin
		//opcode段,funct3段,funct7段的译码处理
		opcode <= inst_i[6:0];
		funct3 <= inst_i[14:12];
		funct7 <= inst_i[31:25];
		pc_o <= pc_i;
	end */

/* 	always @(*) begin
		if(rst == `RstEnable) begin  //复位, 初始化各个寄存器数据
			opcode_o <= `Opcode_InValid; 
			funct3_o <= `funct3_InValid;
			funct7_o <= `funct7_InValid;
			rd_addr_o <= `reg_zero;
			wreg_o <= `WriteDisable;  
			rs1_read_o <= `ReadDisable;
			rs2_read_o <= `ReadDisable;
			imm_o <= `Imm_zero;
			imm_sel_o <= `Imm_sel_12bit;
			shamt_o <= 6'b00_0000;
			offset12_o <= inst_i[31:20];
			offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
			offset_sel_o <= `Offset_sel_12bit;
			rs1_addr_o <= inst_i[19:15];
			rs2_addr_o <= inst_i[24:20];

		end else begin  //非阻塞阶段的相关功能: 指令译码
			opcode_o <= `Opcode_InValid; 
			funct3_o <= `funct3_InValid;
			funct7_o <= `funct7_InValid;
			rd_addr_o <= inst_i[11:7];
			wreg_o <= `WriteDisable;  
			rs1_read_o <= `ReadDisable;
			rs2_read_o <= `ReadDisable;
			rs1_addr_o <= inst_i[19:15];
			rs2_addr_o <= inst_i[24:20];
			imm_o <= `Imm_zero;
			imm_sel_o <= `Imm_sel_12bit;

			shamt_o <= 6'b00_0000;
			offset12_o <= inst_i[31:20];
			offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
			offset_sel_o <= `Offset_sel_12bit;
			case (opcode)

				`Opcode_R_type : begin
					//stall_ctr <= 1'b0;
					case (funct3)
						`funct3_add_sub_mul : begin
							case (funct7)
								`funct7_add : begin  //add 指令译码
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_add_sub_mul;
									funct7_o <= `funct7_add;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								`funct7_sub : begin  //sub 指令译码
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_add_sub_mul;
									funct7_o <= `funct7_sub;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								`funct7_mul : begin  //mul 指令译码
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_add_sub_mul;
									funct7_o <= `funct7_mul;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								default : begin
									opcode_o <= `Opcode_InValid; 
									funct3_o <= `funct3_InValid;
									funct7_o <= `funct7_InValid;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteDisable;  
									rs1_read_o <= `ReadDisable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end
							endcase
						end

						`funct3_and : begin
							case (funct7)
								`funct7_and : begin  //and 指令译码
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_and;
									funct7_o <= `funct7_and;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end
								default : begin
									opcode_o <= `Opcode_InValid; 
									funct3_o <= `funct3_InValid;
									funct7_o <= `funct7_InValid;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteDisable;  
									rs1_read_o <= `ReadDisable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end
							endcase
						end

						`funct3_or : begin
							case (funct7)
								`funct7_or : begin
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_or;
									funct7_o <= `funct7_or;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								default : begin
									opcode_o <= `Opcode_InValid; 
									funct3_o <= `funct3_InValid;
									funct7_o <= `funct7_InValid;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteDisable;  
									rs1_read_o <= `ReadDisable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

							endcase
						end

						`funct3_xor : begin
							case (funct7)
								`funct7_xor : begin  //xor 指令译码
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_xor;
									funct7_o <= `funct7_xor;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end
								default : begin
									opcode_o <= `Opcode_InValid; 
									funct3_o <= `funct3_InValid;
									funct7_o <= `funct7_InValid;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteDisable;  
									rs1_read_o <= `ReadDisable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end
							endcase
						end

						`funct3_sll_mulh : begin
							case (funct7)
								`funct7_sll : begin
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_sll_mulh;
									funct7_o <= `funct7_sll;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								default : begin
								end
							endcase
						end


						`funct3_sra_srl : begin
							case (funct7)
								`funct7_sra : begin //sra 指令译码
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_sra_srl;
									funct7_o <= `funct7_sra;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								`funct7_srl : begin
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_sra_srl;
									funct7_o <= `funct7_srl;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								default : begin
								end
							endcase
						end

						`funct3_slt_mulhsu : begin
							case (funct7)
								`funct7_slt : begin
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_slt_mulhsu;
									funct7_o <= `funct7_slt;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								default : begin
								end
							endcase

						end

						`funct3_sltu_mulhu : begin
							case (funct7)
								`funct7_sltu : begin
									opcode_o <= `Opcode_R_type; 
									funct3_o <= `funct3_sltu_mulhu;
									funct7_o <= `funct7_sltu;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= `Imm_zero;
									imm_sel_o <= `Imm_sel_12bit;
									//stall_ctr <= 1'b0;
								end

								default : begin
								end
							endcase

						end

						default : begin
							opcode_o <= `Opcode_InValid; 
							funct3_o <= `funct3_InValid;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadDisable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= `Imm_zero;
							imm_sel_o <= `Imm_sel_12bit;
							//stall_ctr <= 1'b0;
						end

					endcase

				end

				`Opcode_R_I_type_imm : begin
					case (funct3)
						`funct3_ori : begin  //ori 指令译码
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_ori;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
						end

						`funct3_addi : begin  //addi 指令译码
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_addi;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
						end

						`funct3_andi : begin  //andi 指令译码
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_andi;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
						end

						`funct3_xori : begin  //xori 指令译码
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_xori;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
						end

						`funct3_slli : begin
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_slli;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							shamt_o <= inst_i[25:20];
						end


						`funct3_srai_srli : begin
							case (inst_i[31:26])
								`funct6_srai : begin //srai 指令译码
									opcode_o <= `Opcode_R_I_type_imm; 
									funct3_o <= `funct3_srai_srli;
									funct7_o <= {1'b0, inst_i[31:26]};
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
									shamt_o <= inst_i[25:20];
								end

								`funct6_srli : begin
									opcode_o <= `Opcode_R_I_type_imm; 
									funct3_o <= `funct3_srai_srli;
									funct7_o <= {1'b0, inst_i[31:26]};
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
									shamt_o <= inst_i[25:20];
								end

								default : begin
								end
							endcase
						end

						`funct3_slti : begin
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_slti;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							shamt_o <= inst_i[25:20];
						end

						`funct3_sltiu : begin
							opcode_o <= `Opcode_R_I_type_imm; 
							funct3_o <= `funct3_sltiu;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							shamt_o <= inst_i[25:20];
						end

						default : begin
							opcode_o <= `Opcode_InValid; 
							funct3_o <= `funct3_InValid;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadDisable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= `Imm_zero;
							imm_sel_o <= `Imm_sel_12bit;

							shamt_o <= 6'b00_0000;
							offset12_o <= inst_i[31:20];
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end
					endcase
				end

				`Opcode_I_type_word : begin
					//stall_ctr <= 1'b0;
					case (funct3)
						`funct3_addiw : begin  //addiw 指令译码
							opcode_o <= `Opcode_I_type_word; 
							funct3_o <= `funct3_addiw;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
						end

						`funct3_slliw : begin
							opcode_o <= `Opcode_I_type_word; 
							funct3_o <= `funct3_slliw;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							shamt_o <= inst_i[25:20];
						end

						`funct3_sraiw_srliw : begin  //sraiw_srliw 指令译码
							opcode_o <= `Opcode_I_type_word; 
							funct3_o <= `funct3_sraiw_srliw;
							funct7_o <= {1'b0, inst_i[31:26]};
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							shamt_o <= inst_i[25:20];
						end

						default : begin
						end
					endcase
				end

				`Opcode_I_type_jalr : begin  // jalr指令译码
					opcode_o <= `Opcode_I_type_jalr; 
					funct3_o <= `funct3_jalr;
					funct7_o <= `funct7_InValid;
					rd_addr_o <= inst_i[11:7];
					wreg_o <= `WriteEnable;  
					rs1_read_o <= `ReadEnable;
					rs2_read_o <= `ReadDisable;
					rs1_addr_o <= inst_i[19:15];
					rs2_addr_o <= 5'b0_0000;
					imm_o <= {8'b0000_0000, inst_i[31:20]};
					imm_sel_o <= `Imm_sel_12bit;
				end

				`Opcode_R_type_word : begin
					//stall_ctr <= 1'b0;
					case (funct3)
						`funct3_addw_subw_mulw : begin
							case (funct7)
								`funct7_addw : begin  //addw 指令译码
									opcode_o <= `Opcode_R_type_word; 
									funct3_o <= `funct3_addw_subw_mulw;
									funct7_o <= `funct7_addw;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
								end

								`funct7_subw : begin  //subw 指令译码
									opcode_o <= `Opcode_R_type_word; 
									funct3_o <= `funct3_addw_subw_mulw;
									funct7_o <= `funct7_subw;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
								end

								default : begin
									opcode_o <= `Opcode_InValid; 
									funct3_o <= `funct3_InValid;
									funct7_o <= `funct7_InValid;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteDisable;  
									rs1_read_o <= `ReadDisable;
									rs2_read_o <= `ReadDisable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
								end
							endcase
						end

						`funct3_sllw : begin
							case (funct7)
								`funct7_sllw : begin
									opcode_o <= `Opcode_R_type_word; 
									funct3_o <= `funct3_sllw;
									funct7_o <= `funct7_sllw;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
								end
								default : begin
								end
							endcase
						end

						`funct3_sraw_srlw : begin
							case (funct7)
								`funct7_sraw : begin
									opcode_o <= `Opcode_R_type_word; 
									funct3_o <= `funct3_sraw_srlw;
									funct7_o <= `funct7_sraw;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
								end

								`funct7_srlw : begin
									opcode_o <= `Opcode_R_type_word; 
									funct3_o <= `funct3_sraw_srlw;
									funct7_o <= `funct7_srlw;
									rd_addr_o <= inst_i[11:7];
									wreg_o <= `WriteEnable;  
									rs1_read_o <= `ReadEnable;
									rs2_read_o <= `ReadEnable;
									rs1_addr_o <= inst_i[19:15];
									rs2_addr_o <= inst_i[24:20];
									imm_o <= {8'b0000_0000, inst_i[31:20]};
									imm_sel_o <= `Imm_sel_12bit;
								end

								default : begin
								end
							endcase
						end

					endcase

				end

				`Opcode_S_type : begin
					case (funct3)
						`funct3_sb : begin
							opcode_o <= `Opcode_S_type; 
							funct3_o <= `funct3_sb;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= {inst_i[31:25], inst_i[11:7]};
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_sh : begin
							opcode_o <= `Opcode_S_type; 
							funct3_o <= `funct3_sh;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= {inst_i[31:25], inst_i[11:7]};
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_sw : begin
							opcode_o <= `Opcode_S_type; 
							funct3_o <= `funct3_sw;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= {inst_i[31:25], inst_i[11:7]};
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_sd : begin
							opcode_o <= `Opcode_S_type; 
							funct3_o <= `funct3_sd;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= {inst_i[31:25], inst_i[11:7]};
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						default : begin
						end
					endcase
				end

				`Opcode_I_type_load : begin
					case (funct3)
						`funct3_lb : begin
							opcode_o <= `Opcode_I_type_load; 
							funct3_o <= `funct3_lb;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= inst_i[31:20];
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_lbu : begin
							opcode_o <= `Opcode_I_type_load; 
							funct3_o <= `funct3_lbu;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= inst_i[31:20];
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_lh : begin
							opcode_o <= `Opcode_I_type_load; 
							funct3_o <= `funct3_lh;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= inst_i[31:20];
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_lw : begin
							opcode_o <= `Opcode_I_type_load; 
							funct3_o <= `funct3_lw;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= inst_i[31:20];
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_ld : begin
							opcode_o <= `Opcode_I_type_load; 
							funct3_o <= `funct3_ld;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteEnable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadDisable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							offset12_o <= inst_i[31:20];
							offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						default : begin
						end
					endcase
				end

				`Opcode_B_type : begin
					case (funct3)
						`funct3_beq : begin  // beq指令译码
							opcode_o <= `Opcode_B_type; 
							funct3_o <= `funct3_beq;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							offset12_o <= {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_bgeu : begin  // bgeu指令译码
							opcode_o <= `Opcode_B_type; 
							funct3_o <= `funct3_bgeu;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							offset12_o <= {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_blt : begin  // blt指令译码
							opcode_o <= `Opcode_B_type; 
							funct3_o <= `funct3_blt;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							offset12_o <= {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_bltu : begin  // bltu指令译码
							opcode_o <= `Opcode_B_type; 
							funct3_o <= `funct3_bltu;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							offset12_o <= {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						`funct3_bne : begin  // bne指令译码
							opcode_o <= `Opcode_B_type; 
							funct3_o <= `funct3_bne;
							funct7_o <= `funct7_InValid;
							rd_addr_o <= inst_i[11:7];
							wreg_o <= `WriteDisable;  
							rs1_read_o <= `ReadEnable;
							rs2_read_o <= `ReadEnable;
							rs1_addr_o <= inst_i[19:15];
							rs2_addr_o <= inst_i[24:20];
							imm_o <= {8'b0000_0000, inst_i[31:20]};
							imm_sel_o <= `Imm_sel_12bit;
							offset12_o <= {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8]};
							offset_sel_o <= `Offset_sel_12bit;
						end

						default : begin
						end
					endcase
				end

				`Opcode_J_type_jal : begin  //jal 指令译码
					opcode_o <= `Opcode_J_type_jal; 
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					rd_addr_o <= inst_i[11:7];
					wreg_o <= `WriteEnable;  
					rs1_read_o <= `ReadDisable;
					rs2_read_o <= `ReadDisable;
					rs1_addr_o <= 5'b0_0000;
					rs2_addr_o <= 5'b0_0000;
					imm_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
					imm_sel_o <= `Imm_sel_20bit;
				end

				`Opcode_U_type_auipc : begin  //auipc 指令译码
					opcode_o <= `Opcode_U_type_auipc; 
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					rd_addr_o <= inst_i[11:7];
					wreg_o <= `WriteEnable;  
					rs1_read_o <= `ReadDisable;
					rs2_read_o <= `ReadDisable;
					rs1_addr_o <= 5'b0_0000;
					rs2_addr_o <= 5'b0_0000;
					imm_o <= inst_i[31:12];
					imm_sel_o <= `Imm_sel_20bit;
				end

				`Opcode_U_type_lui : begin  //lui 指令译码
					opcode_o <= `Opcode_U_type_lui; 
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					rd_addr_o <= inst_i[11:7];
					wreg_o <= `WriteEnable;  
					rs1_read_o <= `ReadDisable;
					rs2_read_o <= `ReadDisable;
					rs1_addr_o <= 5'b0_0000;
					rs2_addr_o <= 5'b0_0000;
					imm_o <= inst_i[31:12];
					imm_sel_o <= `Imm_sel_20bit;
				end

				default : begin  //非法指令处理过程				
					opcode_o <= `Opcode_InValid; 
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					rd_addr_o <= inst_i[11:7];
					wreg_o <= `WriteDisable;  
					rs1_read_o <= `ReadDisable;
					rs2_read_o <= `ReadDisable;
					rs1_addr_o <= inst_i[19:15];
					rs2_addr_o <= inst_i[24:20];
					imm_o <= `Imm_zero;
					imm_sel_o <= `Imm_sel_12bit;

					shamt_o <= 6'b00_0000;
					offset12_o <= inst_i[31:20];
					offset20_o <= {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21]};
					offset_sel_o <= `Offset_sel_12bit;
				end
			endcase  //op
		end
	end

	//rs1
	always @(*) begin
		if(rst == `RstEnable) begin //复位
			rs1_data_o <= `Doubel_Zero_Word;
		end else begin
			if(rs1_addr_o == `reg_zero) begin
				rs1_data_o <= `Doubel_Zero_Word;
			end else if((rs1_addr_o == ex_back_rd_addr_i) && (rs1_read_o == `ReadEnable) && (ex_back_wreg_i == `WriteEnable)) begin //EX 模块的数据重定向 (三个重定向的顺序决定了重定向优先级)
				rs1_data_o <= ex_back_wdata_i;
			end else if((rs1_addr_o == mem_back_rd_addr_i) && (rs1_read_o == `ReadEnable) && (mem_back_wreg_i == `WriteEnable)) begin  //MEM 模块的数据重定向
				rs1_data_o <= mem_back_wdata_i;
			end else if((rs1_addr_o == mem_wb_back_rd_addr_i) && (rs1_read_o == `ReadEnable) && (mem_wb_back_wreg_i == `WriteEnable)) begin  //MEM_WB 模块的数据重定向
				rs1_data_o <= mem_wb_back_wdata_i;
			end else if(rs1_read_o == `ReadEnable) begin
				rs1_data_o <= rs1_data_i;
			end else begin
				rs1_data_o <= `Doubel_Zero_Word;
			end
		end
	end

	//rs2
	always @(*) begin
		if(rst == `RstEnable) begin //复位
			rs2_data_o <= `Doubel_Zero_Word;
		end else begin
			if(rs2_addr_o == `reg_zero) begin
				rs2_data_o <= `Doubel_Zero_Word;
			end else if((rs2_addr_o == ex_back_rd_addr_i) && (rs2_read_o == `ReadEnable) && (ex_back_wreg_i == `WriteEnable)) begin  //EX 模块的数据重定向 (三个重定向的顺序决定了重定向优先级)
				rs2_data_o <= ex_back_wdata_i;
			end else if((rs2_addr_o == mem_back_rd_addr_i) && (rs2_read_o == `ReadEnable) && (mem_back_wreg_i == `WriteEnable)) begin  //MEM 模块的数据重定向
				rs2_data_o <= mem_back_wdata_i;
			end else if((rs2_addr_o == mem_wb_back_rd_addr_i) && (rs2_read_o == `ReadEnable) && (mem_wb_back_wreg_i == `WriteEnable)) begin  //MEM_WB 模块的数据重定向
				rs2_data_o <= mem_wb_back_wdata_i;
			end else if(rs2_read_o == `ReadEnable) begin
				rs2_data_o <= rs2_data_i;
			end else begin
				rs2_data_o <= `Doubel_Zero_Word;
			end
		end
	end */

endmodule