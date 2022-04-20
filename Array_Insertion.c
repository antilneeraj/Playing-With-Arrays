/*
C Program to insert an element in an array
Author : Neeraj
Date : March 3, 2022
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 20

void main()
{
    int arr[max], i, j, n, ind, new_num;
enter:
    system("cls");
    printf("\nPlese Enter the limit less than 20 : ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("\nLimit entered by you is greater than 20!");
        goto enter;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter no. %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n::::ARRAY BEFORE INSERTION::::\n");
    for (i = 0; i < n; i++)
    {
        printf("::%d::", arr[i]);
    }
    printf("\nKindly note that index starts from 0\nPlease enter the index on wihch you want to insert a new number : ");
    scanf("%d", &ind);
    printf("Enter the number : ");
    scanf("%d", &new_num);
    printf("\n::::ARRAY AFTER INSERTION::::\n");
    for (i = 0; i < n + 1; i++)
    {
        if (i == ind)
        {
            for (j = n + 1; j > i; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[i] = new_num;
        }
        printf("::%d::", arr[i]);
    }
    getch();
}
