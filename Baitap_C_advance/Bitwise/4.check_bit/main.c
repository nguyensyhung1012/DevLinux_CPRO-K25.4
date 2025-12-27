/**
 * @file main.c
 * @author nguyen sy hung 
 * @brief chương trình hướng dẫn kiểm tra 1 bit cụ thể đã được bật hay chưa
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief kiểm tra bit thứ n của biến value đã được bật chưa
 * 
 * @param value 
 * @param n 
 */
void check_bit(uint8_t value , int n){
    if(value & (1<<n)){
        printf("bit thu %d da duoc bat",n);
    }else{
        printf("bit thu %d dang tat",n);
    }
}

int main(){
    uint8_t x = 0b00101100; 
    /* kiểm tra bit thứ n = 3 */
    check_bit(x,3);
}