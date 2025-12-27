/**
 * @file ex9.c
 * @author nguyen sy hung 
 * @brief Sắp xếp mảng tăng dần
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
int temp = 0;
for(int i = 0 ; i < a; i++)
{
    for(int j = i + 1 ; j < a ; j++){
        if(arr_A[i] > arr_A[j])
        {
            temp = arr_A[i];
            arr_A[i] = arr_A[j];
            arr_A[j] = temp ;
        }else
        {
            /* do nothing*/
        }
    }
}
printf("arr_A : ");
for(int k = 0 ; k < a ; k++){
    printf("%d ", arr_A[k]);
}
}