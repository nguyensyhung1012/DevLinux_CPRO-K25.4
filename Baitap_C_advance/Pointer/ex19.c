/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ để xử lý ma trận động NxM.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=2,m=3;
    int **a = malloc(n*sizeof(int*));

    for(int i=0;i<n;i++)
        a[i]=malloc(m*sizeof(int));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            a[i][j]=i+j;

    for(int i=0;i<n;i++)
        free(a[i]);
    free(a);

    return 0;
}
