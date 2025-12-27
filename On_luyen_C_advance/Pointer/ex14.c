/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Viết hàm nhập ma trận dùng con trỏ 2 chiều.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 2, c = 3;
    int **a = (int**)malloc(r * sizeof(int*));

    for (int i = 0; i < r; i++)
        a[i] = (int*)malloc(c * sizeof(int));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
        free(a[i]);
    free(a);

    return 0;
}
