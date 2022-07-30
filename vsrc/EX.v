`include "defines.v"
/* (* DONT_TOUCH= "true" *) */
module EX(

	input wire					clk,
	input wire 					rst,
/* 	input wire 					rs1_read_i,  //标志位: 是否使用源寄存器1的数据
	input wire 					rs2_read_i,  //标志位: 是否使用源寄存器2的数据 */
	input[`RegAddrBus] 			rs1_addr_i,
	input[`RegAddrBus] 			rs2_addr_i,
	input wire[`OpcodeBus] 		opcode_i,  //译码结果: 操作码
	input wire[`FunctBus3] 		funct3_i,  //译码结果: 3位宽操作码附加段
	input wire[`FunctBus7] 		funct7_i,  //译码结果: 7位宽操作码附加段
	input wire[`RegBus] 		rs1_data_i,  //源寄存器1的数据输出
	input wire[`RegBus] 		rs2_data_i,  //源寄存器2的数据输出
	input wire[`RegAddrBus] 	rd_addr_i,  //目标寄存器 rd 的地址
	input wire 					wreg_i,  //标志位: 是否使用目标寄存器 rd
	input wire[`ImmBus] 		imm_i,  //立即数 (注意: 由于risc-v指令集中的立即数有两种位宽<12/20>, 根据实际指令的不同进行选择,选择标志位为 imm_sel_o, 执行模块EX应根据 imm_sel 选择是否从低位到高位截取imm_o)
/* 	input wire 					imm_sel_i,  //立即数位宽选择标志位: 1'b0 => 位宽12  1'b1 => 位宽20 */
/* 	input wire[`ShamtBus] 		shamt_i, */
	input wire[`Offset12Bus] 	offset12_i,
/* 	input wire[`Offset20Bus] 	offset20_i,
	input wire 					offset_sel_i, */
	input wire[`AddrBus] 		pc_i,
/* 	input wire		 			dcache_data_valid_i,
	input wire	[`DataBus]		dcache_data_i, */

	input wire[`RegBus] mem_back_wdata_i,                   //数据前推
	input wire[`RegAddrBus] mem_back_rd_addr_i,             //数据前推
	input wire mem_back_wreg_i,                             //数据前推

	output wire[`RegAddrBus] rd_addr_o,          //目标寄存器 rd 的地址
	output wire wreg_o,                          //标志位: 是否使用目标寄存器 rd
	output wire[`RegBus] wdata_o,                // ALU运算结果/写入rd的数据
/* 	output wire[`OpcodeBus] opcode_o,  */           //操作码, 传输到访存阶段, 确定加载/存储指令类型
/* 	output wire[`FunctBus3] funct3_o,            //3位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型
	output wire[`FunctBus7] funct7_o,            //7位宽操作码附加段, 传输到访存阶段, 进一步确定指令类型 */
	output wire[`RegAddrBus] ex_back_rd_addr_o,
	output wire ex_back_wreg_o,
	output wire[`RegBus] ex_back_wdata_o,
	output wire branch_flag_o,  //分支标志位
	output wire[`AddrBus] pc_new_o/* ,
	output wire[`DRAM_Rdata_Bus] dram_rdata_o,
	output wire	mem_wdata_sel_o */
);
/* 	wire[`RegAddrBus] rd_addr;  //目标寄存器地址 */
	wire[`RegBus] rs1_data;  //源寄存器1数据输入
	wire[`RegBus] rs2_data;  //源寄存器2数据输入
/* 	wire[`AddrBus] memory_addr; */
/* 	reg[`RegBus] wdata_p;  //数据输出 */
/* 	reg[`RegBus] mul_h;  //乘法结果高位
	reg[`RegBus] mul_l;  //乘法结果低位 */

/* 	reg[`Byte] dram_wen;
	reg[`DRAM_Addr_Bus] dram_addr;
	reg[`DRAM_Wdata_Bus] dram_wdata; */
	// wire [`DRAM_Rdata_Bus] dram_rdata;

/* 	wire[`OpcodeBus] opcode;
	wire[`FunctBus3] funct3;
	wire[`FunctBus7] funct7;
	wire[`ImmBus] imm; */


	wire[`HalfRegBus] wdata_addiw;
/* 	wire[`RegBus] wdata_slliw;
	wire[`RegBus] wdata_sraiw;
	wire[`RegBus] wdata_srliw; */

	assign wdata_addiw = {rs1_data + { {52{imm_i[11]}}, imm_i[11:0] }}[63:32];
/* 	assign wdata_slliw = rs1_data << shamt_i;
	assign wdata_sraiw = ($signed(rs1_data)) >>> shamt_i;
	assign wdata_srliw = rs1_data >> shamt_i; */



/* 	assign rd_addr = rd_addr_i; */
	//mem级的数据前推
	// assign rs1_data = ({64{((rs1_addr_i == mem_back_rd_addr_i) && (rs1_read_i == `ReadEnable) && (mem_back_wreg_i == `WriteEnable))}} & mem_back_wdata_i) | rs1_data_i; //该版本会导致高阻态传播
	// assign rs2_data = ({64{((rs2_addr_i == mem_back_rd_addr_i) && (rs2_read_i == `ReadEnable) && (mem_back_wreg_i == `WriteEnable))}} & mem_back_wdata_i) | rs2_data_i;
	assign rs1_data = ((rs1_addr_i == mem_back_rd_addr_i) && (mem_back_wreg_i == `WriteEnable) && (rs1_addr_i != `reg_zero)) ? mem_back_wdata_i : rs1_data_i;
	assign rs2_data = ((rs2_addr_i == mem_back_rd_addr_i) && (mem_back_wreg_i == `WriteEnable) && (rs1_addr_i != `reg_zero)) ? mem_back_wdata_i : rs2_data_i;
/* 	assign opcode = opcode_i;
	assign funct3 = funct3_i;
	assign funct7 = funct7_i;
	assign imm = imm_i; */
/* 	assign memory_addr = rs1_data + $signed({{52{offset12_i[11]}},offset12_i}); */

/* 	always @(*) begin  //数据前推
		ex_back_rd_addr_o <= rd_addr_i;
		//ex_back_wreg_o <= wreg_i; //初始版本, 若出问题请改为该版本
		ex_back_wreg_o <= wreg_o;
		ex_back_wdata_o <= wdata_o;
	end */

/* ============================================================ */
	wire [`RegBus] wdata_t;
/* rd_addr_o wreg_o opcode_o funct3_o funct7_o ex_back_rd_addr_o ex_back_wreg_o ex_back_wdata_o */
	assign rd_addr_o = rd_addr_i;
	assign wreg_o = wreg_i;
/* 	assign opcode_o = opcode_i; */
/* 	assign funct3_o = funct3_i;
	assign funct7_o = funct7_i; */
	assign ex_back_rd_addr_o = rd_addr_i;
	assign ex_back_wreg_o = wreg_i;
	assign ex_back_wdata_o = wdata_t;

/* wdata_o */
	wire wdata_wen;
	assign wdata_wen = 1'b1;
	Reg #(64, 64'b0) reg1 (clk, rst, wdata_t, wdata_o, wdata_wen);

	wire [`RegBus] wdata_t_add;
	wire [`RegBus] wdata_t_addi;
	wire [`RegBus] wdata_t_addiw;
	wire [`RegBus] wdata_t_auipc;
	wire [`RegBus] wdata_t_sub;

	assign wdata_t_add = rs1_data + rs2_data;
	assign wdata_t_addi = rs1_data + {{52{imm_i[11]}}, imm_i[11:0]};
	assign wdata_t_addiw = {{32{wdata_addiw[31]}}, wdata_addiw[31:0]};
	assign wdata_t_auipc = pc_i + $signed({{32{imm_i[19]}}, imm_i, {12{1'b0}}});
	assign wdata_t_sub = rs1_data - rs2_data;

	wire [`RegBus] wdata_opcode_R;
/* 	wire [`RegBus] wdata_opcode_R_imm;
	wire [`RegBus] wdata_opcode_I_word; */
	wire [`RegBus] wdata_opcode_U_auipc;
	wire [`RegBus] wdata_funct3_add_sub_mul;
/* 	wire [`RegBus] wdata_funct7; */
	assign wdata_opcode_U_auipc = wdata_t_auipc;
	MuxKeyWithDefault #(2, 7, 64) mux1 (wdata_t, opcode_i, 64'b0, {
		`Opcode_R_type, 			wdata_opcode_R,
/* 		`Opcode_R_type_imm, 		wdata_opcode_R_imm,
		`Opcode_I_type_word, 		wdata_opcode_I_word, */
		`Opcode_U_type_auipc, 		wdata_opcode_U_auipc
	});

	MuxKeyWithDefault #(3, 3, 64) mux2 (wdata_opcode_R, funct3_i, 64'b0, {
		`funct3_add_sub_mul,		wdata_funct3_add_sub_mul,
		`funct3_addi,				wdata_t_addi,
		`funct3_addiw, 				wdata_t_addiw
	});

	MuxKeyWithDefault #(2, 7, 64) mux3 (wdata_funct3_add_sub_mul, funct7_i, 64'b0, {
		`funct7_add, 				wdata_t_add,
		`funct7_sub, 				wdata_t_sub
	});

/* branch_flag_o */
	wire branch_flag_wen;
	wire branch_flag_t;
	assign branch_flag_wen = 1'b1;
	Reg #(1, 1'b0) reg2 (clk, rst, branch_flag_t, branch_flag_o, branch_flag_wen);

	wire branch_flag_t_beq;
	wire branch_flag_t_bge;
	assign branch_flag_t_beq = {1{(rs1_data == rs2_data)}};
	assign branch_flag_t_bge = {1{($signed(rs1_data) >= $signed(rs2_data))}};
	
	assign branch_flag_t = ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_beq)}} & branch_flag_t_beq)
					|	   ({1{(opcode_i == `Opcode_B_type && funct3_i == `funct3_bge)}} & branch_flag_t_bge)
					|	   ({1{(opcode_i == `Opcode_I_type_jalr)}} & 1'b1)
					|	   ({1{(opcode_i == `Opcode_J_type_jal)}} & 1'b1);

/* pc_new_o */
	assign pc_new_o = pc_i + $signed({{52{offset12_i[10]}}, offset12_i << 1});
/* ============================================================ */

/* 	always @(*) begin
		if (rst == `RstEnable) begin  //复位处理
			rd_addr_o <= `reg_zero;
			wreg_o <= `WriteDisable;
			wdata_o <= `Doubel_Zero_Word;
			wdata_p <= `Doubel_Zero_Word;
			opcode_o <= `Opcode_InValid;
			funct3_o <= `funct3_InValid;
			funct7_o <= `funct7_InValid;
			branch_flag_o <= `Not_branched;
			pc_new_o <= `Invalid_pc;
			dram_wen <= `DRAM_State_Read;
			dram_addr <= memory_addr[`DRAM_Addr_Field];
			dram_wdata <= `Doubel_Zero_Word;
			mem_wdata_sel_o <= 1'b0;
		end else begin

			rd_addr_o <= `reg_zero;
			wreg_o <= `WriteDisable;
			wdata_o <= `Doubel_Zero_Word;
			wdata_p <= `Doubel_Zero_Word;
			opcode_o <= `Opcode_InValid;
			funct3_o <= `funct3_InValid;
			funct7_o <= `funct7_InValid;
			branch_flag_o <= `Not_branched;
			pc_new_o <= `Invalid_pc;
			dram_wen <= `DRAM_State_Read;
			dram_addr <= memory_addr[`DRAM_Addr_Field];
			dram_wdata <= `Doubel_Zero_Word;
			mem_wdata_sel_o <= 1'b0;
			case (opcode)

				`Opcode_R_type : begin
					case (funct3)
						`funct3_add_sub_mul : begin
							case (funct7_i)
								`funct7_add : begin  //add 指令译码  (忽略溢出)
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data + rs2_data;
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_add;
								end

								`funct7_sub : begin  //sub 指令译码  (忽略溢出)
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data - rs2_data;
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_sub;
								end

								// `funct7_mul : begin  //mul 指令译码  (忽略溢出)
								// 	rd_addr_o <= rd_addr;
								// 	wreg_o <= `WriteEnable;
								// 	wdata_o <= rs1_data * rs2_data;
								// 	opcode_o <= `Opcode_R_type;
								// 	funct7_o <= `funct7_mul;
								// end

								default : begin
									rd_addr_o <= `reg_zero;
									wreg_o <= `WriteDisable;
									wdata_o <= `Doubel_Zero_Word;
									opcode_o <= `Opcode_InValid;
									funct3_o <= `funct3_InValid;
								end
							endcase
						end

						`funct3_and : begin
							case (funct7_i)
								`funct7_and : begin  //and 指令译码  (忽略溢出)
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data & rs2_data;
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_add;
								end

								default : begin
									rd_addr_o <= `reg_zero;
									wreg_o <= `WriteDisable;
									wdata_o <= `Doubel_Zero_Word;
									opcode_o <= `Opcode_InValid;
									funct3_o <= `funct3_InValid;
								end
							endcase
						end
						
						`funct3_or : begin
							case (funct7_i)
								`funct7_or : begin  //or 指令译码  (忽略溢出)
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data | rs2_data;
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_or;
								end

								default : begin
									rd_addr_o <= `reg_zero;
									wreg_o <= `WriteDisable;
									wdata_o <= `Doubel_Zero_Word;
									opcode_o <= `Opcode_InValid;
									funct3_o <= `funct3_InValid;
								end
							endcase
						end

						`funct3_xor : begin
							case (funct7_i)
								`funct7_xor : begin  //xor 指令译码  (忽略溢出)
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data ^ rs2_data;
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_xor;
								end

								default : begin
									rd_addr_o <= `reg_zero;
									wreg_o <= `WriteDisable;
									wdata_o <= `Doubel_Zero_Word;
									opcode_o <= `Opcode_InValid;
									funct3_o <= `funct3_InValid;
								end
							endcase
						end

						`funct3_sll_mulh : begin
							case (funct7)
								`funct7_sll : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data << rs2_data[5:0];
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_sll;
								end

								default : begin
								end
							endcase
						end


						`funct3_sra_srl : begin
							case (funct7)
								`funct7_sra : begin //sra 指令译码  (忽略溢出)
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									//注意以下该行代码不可以随意改动, 在Verilog中, ">>" 只被当作逻辑右移.
									wdata_o <= ($signed(rs1_data)) >>> rs2_data[5:0];
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_sra;
								end

								`funct7_srl : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data >> rs2_data[5:0];
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_srl;
								end

								default : begin
								end
							endcase
						end

						`funct3_slt_mulhsu : begin
							case (funct7)
								`funct7_slt : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									if($signed(rs1_data) < $signed(rs2_data)) begin
										wdata_o <= 64'h1;
									end else begin
										wdata_o <= 64'h0;
									end
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_slt;									
								end

								default : begin
								end
							endcase

						end

						`funct3_sltu : begin
							case (funct7)
								`funct7_sltu : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									if(rs1_data < rs2_data) begin
										wdata_o <= 64'h1;
									end else begin
										wdata_o <= 64'h0;
									end
									opcode_o <= `Opcode_R_type;
									funct7_o <= `funct7_sltu;									
								end

								default : begin
								end
							endcase

						end

						default : begin
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_InValid;
							funct3_o <= `funct3_InValid;
						end
					endcase
				end

				`Opcode_R_I_type_imm : begin
					case (funct3)

						`funct3_ori : begin  //ori 指令译码  (忽略溢出)
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= rs1_data | { 52'd0, imm[11:0]};
							opcode_o <= `Opcode_R_type_imm;
							funct3_o <= `funct3_ori;
						end

						`funct3_addi : begin  //addi 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= rs1_data + { {52{imm[11]}}, imm[11:0] };
							opcode_o <= `Opcode_I_type_imm;
							funct3_o <= `funct3_addi;
						end

						`funct3_andi : begin  //andi 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= rs1_data & { 52'd0, imm[11:0] };
							opcode_o <= `Opcode_I_type_imm;
							funct3_o <= `funct3_andi;
						end

						`funct3_xori : begin  //xori 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= rs1_data ^ { 52'd0, imm[11:0] };
							opcode_o <= `Opcode_R_I_type_imm;
							funct3_o <= `funct3_xori;
						end

						`funct3_slli : begin
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= rs1_data << shamt_i;
							opcode_o <= `Opcode_R_I_type_imm;
							funct3_o <= `funct3_slli;
						end


						`funct3_srai_srli : begin
							case (funct7)
								7'b001_0000 : begin  //srai 指令译码
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= ($signed(rs1_data)) >>> shamt_i;
									opcode_o <= `Opcode_R_I_type_imm;
									funct3_o <= `funct3_srai_srli;
								 end
								
								7'b000_0000 : begin  //srli 指令译码
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_o <= rs1_data >>> shamt_i;
									opcode_o <= `Opcode_R_I_type_imm;
									funct3_o <= `funct3_srai_srli;
								end

								default : begin
									rd_addr_o <= `reg_zero;
									wreg_o <= `WriteDisable;
									wdata_o <= `Doubel_Zero_Word;
									opcode_o <= `Opcode_InValid;	
									funct3_o <= `funct3_InValid;
								end
							endcase

						end

						`funct3_slti : begin
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							if($signed(rs1_data) < $signed({{52{imm[11]}}, imm[11:0]})) begin
								wdata_o <= 64'h1;
							end else begin
								wdata_o <= 64'h0;
							end
							opcode_o <= `Opcode_R_I_type_imm;
							funct3_o <= `funct3_slti;
						end

						`funct3_sltiu : begin
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							if(rs1_data < {{52{imm[11]}}, imm[11:0]}) begin
								wdata_o <= 64'h1;
							end else begin
								wdata_o <= 64'h0;
							end
							opcode_o <= `Opcode_R_I_type_imm;
							funct3_o <= `funct3_sltiu;
						end


						default : begin
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_InValid;	
							funct3_o <= `funct3_InValid;
						end

					endcase
				
				end

				`Opcode_I_type_word : begin
					case (funct3)
						`funct3_addiw : begin  //addiw 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							//wdata_p <= rs1_data + { {52{imm[11]}}, imm[11:0] };
							wdata_o <= {{32{wdata_addiw[31]}}, wdata_addiw[31:0]};
							//wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_I_type_word;
							funct3_o <= `funct3_addiw;
						end

						`funct3_slliw : begin  //slliw 指令译码
							if (shamt_i[5] == 1'b0) begin
								rd_addr_o <= rd_addr;
								wreg_o <= `WriteEnable;
								//wdata_p <= rs1_data << shamt_i;
								wdata_o <= {{32{wdata_slliw[31]}}, wdata_slliw[31:0]};
								opcode_o <= `Opcode_I_type_word;
								funct3_o <= `funct3_slliw;
							end else begin
								rd_addr_o <= `reg_zero;
								wreg_o <= `WriteDisable;
								wdata_o <= `Doubel_Zero_Word;
								opcode_o <= `Opcode_InValid;
								funct3_o <= `funct3_InValid;
							end

						end

						`funct3_sraiw_srliw : begin  //sraiw_srliw 指令译码
							case (funct7)
								7'b001_0000 : begin
									if (shamt_i[5] == 1'b0) begin  //sraiw 指令译码
										rd_addr_o <= rd_addr;
										wreg_o <= `WriteEnable;
										//wdata_p <= ($signed(rs1_data)) >>> shamt_i;
										wdata_o <= {{32{wdata_sraiw[31]}}, wdata_sraiw[31:0]};
										opcode_o <= `Opcode_I_type_word;
										funct3_o <= `funct3_sraiw_srliw;
									end else begin
										rd_addr_o <= `reg_zero;
										wreg_o <= `WriteDisable;
										wdata_o <= `Doubel_Zero_Word;
										opcode_o <= `Opcode_InValid;
										funct3_o <= `funct3_InValid;
									end
								end

								7'b000_0000 : begin
									if (shamt_i[5] == 1'b0) begin  //srliw 指令译码
										rd_addr_o <= rd_addr;
										wreg_o <= `WriteEnable;
										//wdata_p <= rs1_data >> shamt_i;
										wdata_o <= {{32{wdata_srliw[31]}}, wdata_srliw[31:0]};
										opcode_o <= `Opcode_I_type_word;
										funct3_o <= `funct3_sraiw_srliw;
									end else begin
										rd_addr_o <= `reg_zero;
										wreg_o <= `WriteDisable;
										wdata_o <= `Doubel_Zero_Word;
										opcode_o <= `Opcode_InValid;
										funct3_o <= `funct3_InValid;
									end
								end

								default : begin
								end
							endcase

						end

						default: begin
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_InValid;
							funct3_o <= `funct3_InValid;
						end
					endcase
				end

				`Opcode_R_type_word : begin
					case (funct3)
						`funct3_addw_subw_mulw : begin
							case (funct7)
								`funct7_addw : begin  //addw 指令译码
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_p <= rs1_data + rs2_data;
									wdata_o <= {{32{wdata_p[31]}}, wdata_p[31:0]};
									opcode_o <= `Opcode_R_type_word;
									funct7_o <= `funct7_addw;
								end

								`funct7_subw : begin  //subw 指令译码
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_p <= rs1_data - rs2_data;
									wdata_o <= {{32{wdata_p[31]}}, wdata_p[31:0]};
									opcode_o <= `Opcode_R_type_word;
									funct7_o <= `funct7_subw;
								end

								default: begin
									rd_addr_o <= `reg_zero;
									wreg_o <= `WriteDisable;
									wdata_o <= `Doubel_Zero_Word;
									opcode_o <= `Opcode_InValid;
									funct3_o <= `funct3_InValid;
								end
							endcase
						end

						`funct3_sllw : begin
							case (funct7)
								`funct7_sllw : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_p <= rs1_data << rs2_data[4:0];
									wdata_o <= {{32{wdata_p[31]}}, wdata_p[31:0]};
									opcode_o <= `Opcode_R_type_word;
									funct7_o <= `funct7_sllw;
								end
								default : begin
								end
							endcase
						end

						`funct3_sraw_srlw : begin
							case (funct7)
								`funct7_sraw : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_p <= ($signed(rs1_data)) >>> rs2_data[4:0];
									wdata_o <= {{32{wdata_p[31]}}, wdata_p[31:0]};
									opcode_o <= `Opcode_R_type_word;
									funct7_o <= `funct7_sraw;
								end

								`funct7_srlw : begin
									rd_addr_o <= rd_addr;
									wreg_o <= `WriteEnable;
									wdata_p <= rs1_data >> rs2_data[4:0];
									wdata_o <= {{32{wdata_p[31]}}, wdata_p[31:0]};
									opcode_o <= `Opcode_R_type_word;
									funct7_o <= `funct7_srlw;
								end

								default : begin
								end
							endcase

						end

					endcase
				end

				`Opcode_B_type : begin
					case (funct3)
						`funct3_beq : begin //beq 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_B_type;
							funct3_o <= `funct3_beq;							
							if (rs1_data == rs2_data) begin // 进行分支跳转
								branch_flag_o <= `Branched;
								pc_new_o[31:0] <= pc_i[31:0] + $signed({{20{offset12_i[10]}}, offset12_i << 1});
							end else begin
								branch_flag_o <= `Not_branched;
								pc_new_o <= `Invalid_pc;
							end
						end

						`funct3_bge : begin //bge 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_B_type;
							funct3_o <= `funct3_bge;							
							if ($signed(rs1_data) >= $signed(rs2_data)) begin // 进行分支跳转
								branch_flag_o <= `Branched;
								pc_new_o[31:0] <= pc_i[31:0] + $signed({{20{offset12_i[10]}}, offset12_i << 1});
							end else begin
								branch_flag_o <= `Not_branched;
								pc_new_o <= `Invalid_pc;
							end
						end

						`funct3_bgeu : begin //bgeu 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_B_type;
							funct3_o <= `funct3_bgeu;							
							if (rs1_data >= rs2_data) begin // 进行分支跳转
								branch_flag_o <= `Branched;
								pc_new_o[31:0] <= pc_i[31:0] + $signed({{20{offset12_i[10]}}, offset12_i << 1});
							end else begin
								branch_flag_o <= `Not_branched;
								pc_new_o <= `Invalid_pc;
							end
						end

						`funct3_blt : begin //blt 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_B_type;
							funct3_o <= `funct3_blt;							
							if ($signed(rs1_data) < $signed(rs2_data)) begin // 进行分支跳转
								branch_flag_o <= `Branched;
								pc_new_o[31:0] <= pc_i[31:0] + $signed({{20{offset12_i[10]}}, offset12_i << 1});
							end else begin
								branch_flag_o <= `Not_branched;
								pc_new_o <= `Invalid_pc;
							end
						end

						`funct3_bltu : begin //bltu 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_B_type;
							funct3_o <= `funct3_bltu;							
							if (rs1_data < rs2_data) begin // 进行分支跳转
								branch_flag_o <= `Branched;
								pc_new_o[31:0] <= pc_i[31:0] + $signed({{20{offset12_i[10]}}, offset12_i << 1});
							end else begin
								branch_flag_o <= `Not_branched;
								pc_new_o <= `Invalid_pc;
							end
						end

						`funct3_bne : begin //bne 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_B_type;
							funct3_o <= `funct3_bne;							
							if (rs1_data == rs2_data) begin // 进行分支跳转
								branch_flag_o <= `Branched;
								pc_new_o[31:0] <= pc_i[31:0] + $signed({{20{offset12_i[10]}}, offset12_i << 1});
							end else begin
								branch_flag_o <= `Not_branched;
								pc_new_o <= `Invalid_pc;
							end
						end

						default : begin
						end
					endcase
				end

				`Opcode_S_type : begin
					case(funct3)
						`funct3_sb : begin //sb 指令译码
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_S_type;
							funct3_o <= `funct3_sb;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;

                            dram_wen <= `DRAM_State_Wen_sb;
                            dram_addr <= memory_addr[`DRAM_Addr_Field];
                            dram_wdata <= rs2_data[7:0];
                            mem_wdata_sel_o <= 1'b1;

						end

						`funct3_sh : begin //sh 指令译码
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_S_type;
							funct3_o <= `funct3_sh;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;
							dram_wen <= `DRAM_State_Wen_sh;
							dram_addr <= memory_addr[`DRAM_Addr_Field];
							dram_wdata <= rs2_data[15:0];
							mem_wdata_sel_o <= 1'b1;
						end

						`funct3_sw : begin //sw 指令译码
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_S_type;
							funct3_o <= `funct3_sw;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;
							dram_wen <= `DRAM_State_Wen_sw;
							dram_addr <= memory_addr[`DRAM_Addr_Field];
							dram_wdata <= rs2_data[31:0];
							mem_wdata_sel_o <= 1'b1;
						end

						`funct3_sd : begin //sd 指令译码
							rd_addr_o <= `reg_zero;
							wreg_o <= `WriteDisable;
							wdata_o <= `Doubel_Zero_Word;
							wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_S_type;
							funct3_o <= `funct3_sd;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;
							dram_wen <= `DRAM_State_Wen_sd;
							dram_addr <= memory_addr[`DRAM_Addr_Field];
							dram_wdata <= rs2_data[63:0];
							mem_wdata_sel_o <= 1'b1;
						end

					endcase
				end

				`Opcode_I_type_load : begin
					case(funct3)
						`funct3_lb : begin //lb 指令译码
							rd_addr_o <= rd_addr;
							//wreg_o <= `WriteEnable;
							//wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_I_type_load;
							funct3_o <= `funct3_lb;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;

                            wdata_o <= `Doubel_Zero_Word;
                            dram_wen <= `DRAM_State_Read;
                            dram_addr <= memory_addr[`DRAM_Addr_Field];
                            mem_wdata_sel_o <= 1'b1; //实际上mem_wdata_sel_o应该为mem_rdata_sel_o, 暂时没有时间改
                            wreg_o <= `WriteDisable;

						end

						`funct3_lbu : begin //lbu 指令译码
							rd_addr_o <= rd_addr;
							//wreg_o <= `WriteEnable;
							//wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_I_type_load;
							funct3_o <= `funct3_lbu;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;

                            wdata_o <= `Doubel_Zero_Word;
                            dram_wen <= `DRAM_State_Read;
                            dram_addr <= memory_addr[`DRAM_Addr_Field];
                            mem_wdata_sel_o <= 1'b1; //实际上mem_wdata_sel_o应该为mem_rdata_sel_o, 暂时没有时间改
                            wreg_o <= `WriteDisable; //由于实际的数据要在访存及才能得到, 故该级的数据为假, 为防止数据前推时推错误的数据, 暂时关闭wreg

						end

						`funct3_lh : begin //lh 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= `Doubel_Zero_Word;
							wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_I_type_load;
							funct3_o <= `funct3_lh;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;
							dram_wen <= `DRAM_State_Read;
							dram_addr <= memory_addr[`DRAM_Addr_Field];

						end

						`funct3_lw : begin //lw 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteEnable;
							wdata_o <= `Doubel_Zero_Word;
							wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_I_type_load;
							funct3_o <= `funct3_lw;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;
							dram_wen <= `DRAM_State_Read;
							dram_addr <= memory_addr[`DRAM_Addr_Field];

						end

						`funct3_ld : begin //ld 指令译码
							rd_addr_o <= rd_addr;
							wreg_o <= `WriteDisable; //由于实际的数据要在访存及才能得到, 故该级的数据为假, 为防止数据前推时推错误的数据, 暂时关闭wreg
							wdata_o <= `Doubel_Zero_Word;
							//wdata_p <= `Doubel_Zero_Word;
							opcode_o <= `Opcode_I_type_load;
							funct3_o <= `funct3_ld;
							funct7_o <= `funct7_InValid;
							branch_flag_o <= `Not_branched;
							pc_new_o <= `Invalid_pc;
							dram_wen <= `DRAM_State_Read;
							dram_addr <= memory_addr[`DRAM_Addr_Field];

						end

					endcase
				end

				`Opcode_I_type_jalr : begin //jalr 指令译码
					wdata_o <= {32'h00_00_00_00, pc_i[31:0] + 32'h4};
					rd_addr_o <= rd_addr;
					wreg_o <= `WriteEnable;
					opcode_o <= `Opcode_I_type_jalr;
					funct3_o <= `funct3_jalr;
					funct7_o <= `funct7_InValid;
					branch_flag_o <= `Branched;
					pc_new_o <= (rs1_data + $signed({{52{offset12_i[10]}}, offset12_i})) & (~64'h1);
				end

				`Opcode_J_type_jal : begin //jal 指令译码
					wdata_o <= {32'h00_00_00_00, pc_i[31:0] + 32'h4};
					rd_addr_o <= rd_addr;
					wreg_o <= `WriteEnable;
					opcode_o <= `Opcode_J_type_jal;
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					branch_flag_o <= `Branched;
					pc_new_o <= pc_i + $signed({{43{offset20_i[19]}}, offset20_i, 1'b0});
				end

				`Opcode_U_type_auipc : begin //auipc 指令译码
					wdata_o <= pc_i + $signed({{32{imm_i[19]}}, imm_i, {12{1'b0}}});
					rd_addr_o <= rd_addr;
					wreg_o <= `WriteEnable;
					opcode_o <= `Opcode_U_type_auipc;
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					branch_flag_o <= `Not_branched;
					pc_new_o <= pc_i + $signed({{44{offset20_i[19]}}, offset20_i});
				end

				`Opcode_U_type_lui : begin //lui 指令译码
					wdata_o <= {{32{imm_i[19]}}, imm_i, {12{1'b0}}};
					rd_addr_o <= rd_addr;
					wreg_o <= `WriteEnable;
					opcode_o <= `Opcode_U_type_lui;
					funct3_o <= `funct3_InValid;
					funct7_o <= `funct7_InValid;
					branch_flag_o <= `Not_branched;
					pc_new_o <= `Invalid_pc;
				end

				default : begin  //缺省处理
					rd_addr_o <= `reg_zero;
					wreg_o <= `WriteDisable;
					wdata_o <= `Doubel_Zero_Word;
					opcode_o <= `Opcode_InValid;
					funct3_o <= `funct3_InValid;
				end
			endcase  //opcode
		end
	end

	block_ram_1 block_ram (
		.clka (clk_dram		),
		.wea  (dram_wen		),
		.addra(dram_addr	),
		.dina (dram_wdata	),
		.douta(dram_rdata_o	)
	); */

endmodule
