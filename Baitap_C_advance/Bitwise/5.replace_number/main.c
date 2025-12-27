/**
 * @file main.c
 * @author nguyen sy hung
 * @brief cách hoán đổi 2 số không dùng biến thứ 3 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){
    int a = 5 ;
    int b = 10; 
    a ^= b ;
    b ^= a ; 
    a ^= b ;
    printf("a: %d , b: %d", a , b);
}