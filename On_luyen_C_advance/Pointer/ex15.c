/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ để cộng hai ma trận.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};
    int C[2][2];

    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];

    for (int i = 0; i < 4; i++)
        *(pC+i) = *(pA+i) + *(pB+i);

    for (int i = 0; i < 4; i++)
        printf("%d ", *(pC+i));

    return 0;
}
