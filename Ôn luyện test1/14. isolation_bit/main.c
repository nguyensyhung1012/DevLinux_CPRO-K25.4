/**
 * @file main.c
 * @author nguyen sy hung 
 * @brief chương trình hướng dẫn cô lập bit 1 ngoài cùng bên phải bằng 
 * toán tử n & (-n)
 * 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
 #include <stdio.h>
 #include <stdint.h>
/**
 * @brief hàm in 8 bit của 1 biến
 * 
 * @param value 
 */
 void print_bit(uint8_t value){
    printf("x: 0bx");
    for(int i = 7 ; i >= 0 ; i--){
        printf("%d",(value >> i) & 1 ) ;
    }
    printf("\n");
}

int main(){
    int x = 19 ;
    print_bit(x);
    /*2. su dung n & (-n)*/
    print_bit((x & (-x)));
}