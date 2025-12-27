/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Khai báo con trỏ trỏ đến biến int và in địa chỉ, giá trị.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Dia chi x: %p\n", &x);
    printf("Gia tri x: %d\n", x);

    printf("Gia tri p: %p\n", p);
    printf("Gia tri *p: %d\n", *p);

    return 0;
}
