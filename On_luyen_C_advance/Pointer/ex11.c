/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng malloc để cấp phát mảng 10 phần tử int và in chúng.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
        p[i] = i;

    for (int i = 0; i < 10; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}
