/**
 * @file ex5.c
 * @author nguyen sy hung 
 * @brief tìm phần tử lớn nhất trong mảng và vị trí của nó 
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
int max = arr[0] ; /* giả sử ban đầu arr[0] lớn nhất*/
int count = 0; /* biến vị trí */ 
for(int i = 1 ; i < 11; i++)
{
    if(max < arr[i])
    {
        max = arr[i];
        count = i ; 
    }else
    {
        /* do notthing*/
    }
}
printf("Gia tri lon nhat trong mang la: %d o vi tri thu: %d trong mang", max , count);
}