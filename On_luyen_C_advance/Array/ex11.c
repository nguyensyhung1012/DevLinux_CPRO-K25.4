/**
 * @file ex11.c
 * @author nguyen sy hung 
 * @brief Chèn phần tử vào vị trí bất kì 
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
int x = 30 ; /* phần tử mới */
int k = 3 ; /* vị trí phần tử mới */
int b = a + 1 ; /* kích thước mảng sau khi thêm 1 phần tử x tại vị trí k*/
for(int i = b ; i >= k ; i--)
{
    arr_A[i] = arr_A[i-1] ; 
}
arr_A[k] = x ; /* gán phần tử tại vị trí k bằng x */
printf("arr_A : ");
for(int j = 0 ; j < b ; j++)
{
    printf("%d ", arr_A[j]);
}
}