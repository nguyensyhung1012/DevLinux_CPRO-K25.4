/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Gán con trỏ p trỏ tới mảng a[5], in giá trị bằng p.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int *p = a;

    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    return 0;
}
