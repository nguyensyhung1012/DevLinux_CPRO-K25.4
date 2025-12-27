/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ để tính tổng các phần tử mảng.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5};
    int *p = a, sum = 0;

    for (int i = 0; i < 5; i++)
        sum += *(p + i);

    printf("Tong = %d\n", sum);
    return 0;
}
