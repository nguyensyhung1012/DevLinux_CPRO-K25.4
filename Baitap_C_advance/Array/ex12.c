/**
 * @file ex12.c
 * @author nguyen sy hung 
 * @brief Tìm phần tử xuất hiện nhiều nhất
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
int max = 0 ; /*phần tử có số lần lặp lại nhiều nhất*/
int max_count = 0 ; /* số lần lặp lại nhiều nhất của 1 phần tử*/
for(int i = 0 ; i < n; i++)
{
    int count = 0 ; /* số lần lặp lại của phần tử */
    for(int j = 0 ; j < n ; j++ )
    {
        if(arr[i] == arr[j])
        {
            ++count ;
        }else
        {
            /* do nothing*/
        }
    }
    if(count > max_count)
        {
            max_count = count;
            max = arr[i];
        }
}
printf("%d la phan tu trong arr co %d lan lap lai nhieu nhat", max , max_count);
}