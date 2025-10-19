/**
 * @file main.c
 * @author nguyen sy hung 
 * @brief chương trình kiểm tra 1 số có phải bội số của 8 bằng cách
 * sử dụng toán tử (x & (0x7) == 0) hoặc kiểm tra x%8 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
 #include <stdio.h>
 #include <stdint.h>
 int main(){
    /* kiểm tra 1 số có phải là bội số của 8 không */
    int x = 64 ; 
    /*1. kiểm tra x / 8 dư 0*/
    if(x % 8 == 0 ){
        printf("x: %d la boi so cua 8\n", x);
    }else printf("x: %d khong phai la boi so cua 8 \n",x);
    /*2. sử dụng toán tử (x & (0x7) == 0)*/
    if((x & 0x7) == 0 ){
        printf("x: %d la boi so cua 8\n", x);
    }else printf("x: %d khong phai la boi so cua 8 \n",x);
 }