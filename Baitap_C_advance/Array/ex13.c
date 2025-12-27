/**
 * @file ex12.c
 * @author nguyen sy hung 
 * @brief loại bỏ phần tử trùng lặp 
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
int main()
{
int arr[11]= {1,3,5,44,4,5,12,44,3,44,23}; 
int n = sizeof(arr)/sizeof(int);

for(int i = 0 ; i < n; i++)
{
    for(int j = i + 1 ; j < n ;  )
    {
        if(arr[i] == arr[j])
        {
           for(int k = j ; k < n ; k++)
           {
            arr[k] = arr[k+1] ;
           } 
           --n;
        }else
        {
            j++; /* tăng j khi không trùng */
        }
    }
}
printf("arr: ");
for(int f = 0 ; f < n ; f++){
printf("%d ", arr[f]);
}
}