/**
 * @file main.c
 * @author nguyen sy hung 
 * @brief chương trình hướng dẫn set 1 bit cụ thể trong 1 biến
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdint.h>

/**
 * @brief print 8 bit of value
 * 
 * @param value 
 */
void print_bit(uint8_t value){
    printf("x: 0bx");
    for(int i = 7 ; i >= 0 ; i--)
    {
        printf("%d",(value >> i) & 1 ) ;
    }
    printf("\n");
}

int main(){
    uint8_t x = 0b00100000; 
    /* set bit thu 3 cua x */
    x |= (1 << 3);
    printf("set bit thu 3\n"); 
    print_bit(x);
}