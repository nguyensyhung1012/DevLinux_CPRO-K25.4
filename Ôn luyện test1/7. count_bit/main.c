/**
 * @file main.c
 * @author nguyen sy hung
 * @brief chương trình hướng dẫn kiểm tra số bit 1 trong biến 
 * bằng vòng lặp hoặc _builtin_popcount(n)
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
/**
 * @brief hàm sử dụng để đếm bit 1 trong biến
 * 
 * @param n 
 * @return int 
 */
int countBits(unsigned int n) 
{
    int count = 0;
    while (n) {
        if (n & 1)   // nếu bit cuối cùng là 1
            count++;
        n >>= 1;     // dịch phải 1 bit
    }
    return count;
}

int main(){
    /* cach 1 su dung vong lap*/
    printf("so bit 1 trong so 15 la : %d \n" , countBits(15));
    /* su dung _builtin_popcount(n) */
    printf("so bit 1 trong so 15 la: %d \n" , __builtin_popcount(15));
}