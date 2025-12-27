/**
 * @file ex10.c
 * @author nguyen sy hung 
 * @brief Xóa phần tử tại vị trí k , dịch các phần tử sau k sang trái;
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
int k = 3 ;
int b = a -1 ; /* kích thước mảng sau khi loại 1 phần tử k*/
for(int i = k ; i < a; i++)
{
    arr_A[i] = arr_A[(i+1)];
}
printf("arr_A : ");
for(int j = 0 ; j < b ; j++)
{
    printf("%d ", arr_A[j]);
}
}