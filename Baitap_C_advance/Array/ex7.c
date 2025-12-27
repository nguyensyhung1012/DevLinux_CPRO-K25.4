/**
 * @file ex7.c
 * @author nguyen sy hung 
 * @brief tính trung bình cộng các phần tử trong mảng 
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
int main()
{
float arr[11]= {1,3,5,77,4,8,12,44,33,55,23};
int n = 11 ; /* số phần tử trong mảng */
float average_arr = 0 ;
float sum = 0;  
for(int i = 0 ; i < n; i++)
{
    sum += arr[i];
}
average_arr = (sum/n);
printf(" average of array is: %f", average_arr);
}