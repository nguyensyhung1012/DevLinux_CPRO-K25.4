/**
 * @file main.c
 * @author nguyen sy hung
 * @brief : chương trình hướng dẫn tìm bù 2 của 1 số n 
 * 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <stdio.h>

 int main(){
    int x = 10 ; 
    int result = ~x + 1 ;
    printf("2s'complement of x is -x: %d", result);
 }