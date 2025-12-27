/**
 * @file ex8.c
 * @author nguyen sy hung 
 * @brief Gộp 2 mảng A,B vào mảng C
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
int main()
{
int arr_A[]= {1,3,5,77,4,8,12,44,33,55,23};
int a = sizeof(arr_A)/sizeof(int); /* số phần tử trong arr_A*/
int arr_B[] = {33,22,32,56,89};
int b = sizeof(arr_B)/sizeof(int); /* số phần tử trong arr_B*/
int c = a + b ; /* tổng 2 phần tử trong mảng */
int arr_C[100] = {0}; 

for(int i = 0 ; i < a; i++)
{
    arr_C[i] = arr_A[i];
}
for(int j = 0; j< b ; j++)
{
    arr_C[j + a] = arr_B[j];
}
printf("arr_C : ");
for(int k = 0 ; k < c ; k++){
    printf("%d ", arr_C[k]);
}
}