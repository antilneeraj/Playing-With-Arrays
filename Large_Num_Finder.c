/*
Program to print largest number in an array
Author : Neeraj
Date : December 17,2021
*/
#include <stdio.h>
#define array 5

int main()
{
    int a[array], i, large_num = 0;
    printf("\n");
    for (i = 0; i < array; i++)
    {
        printf("Enter %dth element : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < array; i++)
    {
        if (large_num < a[i])
        {
            large_num = a[i];
        }
    }
    printf("\n%d is the Largest element in the whole array.", large_num);
    return 0;
}