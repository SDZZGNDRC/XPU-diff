/* 
NOTICE: This module is only suitable for simulating.
        It need to be adapted for running on real FPGA platform.
*/
module VMEM (
    input wire                          clk,

    input wire[9:0]                     raddr_h_i, 
    input wire[8:0]                     raddr_v_i, 
    input wire[9:0]                     waddr_h_i, 
    input wire[8:0]                     waddr_v_i, 
    input wire                          we_i, 
    input wire[23:0]                    vga_wdata_i, 
    output wire[23:0]                   vga_rdata_o
);

reg [23:0] vga_mem [640][480];

/* initial begin
    $readmemh("./picture.hex", vga_mem);
end */
initial begin
        for(integer index_x=0;index_x<640;index_x=index_x+1)
            for(integer index_y=0;index_y<480;index_y=index_y+1)
                vga_mem[index_x][index_y]=24'h56124e; //初始化
end

always @(posedge clk) begin
    if(we_i==1'b1) begin
        vga_mem[waddr_h_i][waddr_v_i] <= vga_wdata_i;
    end
end

assign vga_rdata_o = vga_mem[raddr_h_i][raddr_v_i];

endmodule
