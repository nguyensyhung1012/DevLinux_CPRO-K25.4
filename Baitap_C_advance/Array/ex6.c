/**
 * @file ex6.c
 * @author nguyen sy hung 
 * @brief tìm kiếm giá trị x có trong mảng không
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
int x = 33 ;
int count = 0 ;   
for(int i = 0 ; i < 11; i++)
{
    if(x == arr[i])
    {
        count = i ;
        printf("found x \n");
        break;
    }else
    {
    /* do nothing */
    }
}
if(count == 0)
{
    printf("not found x in array");
}else
{
    /*do nothing*/
}
}