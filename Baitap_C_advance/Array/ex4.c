/**
 * @file ex4.c
 * @author nguyen sy hung 
 * @brief đảo ngược mảng 
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
int main()
{
int arr[11]= {1,3,5,77,4,8,12,44,33,55,23};
int temp ; /* biến tạm thời */
int n = 11 ; /* số phần tử trong mảng */
for(int i = 0 ; i < n/2; i++)
{
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp ; 
}
for(int j = 0 ; j < n; j++)
{
    printf("%d ",arr[j]);
}
}