/**
 * @file ex3.c
 * @author nguyen sy hung 
 * @brief đếm số chẵn lẻ trong mảng 
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
int main()
{
int arr[10]= {1,3,5,77,4,8,12,44,33,55};
int count_odd = 0 ;
int count_even = 0;
for(int i = 0 ; i < 10; i++)
{
    if(arr[i]%2 == 0)
    {
        ++count_even;
    }else
    {
        ++count_odd;
    }
}
printf("even: %d\n", count_even);
printf("odd: %d\n", count_odd);
}