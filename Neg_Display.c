/*
Program to print all negative elements of an array
Author : Neeraj
Date : December 20,2021
*/
#include <stdio.h>
#include <conio.h>
#define n 10

void main()
{
    int a[n], i, neg_num;
    printf("\nEnter Elements of an array(In Integer format) : \n");
    for (i = 0; i < 10; i++)
    {
        scanf("\n%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        neg_num = a[i];
        // if (i == 0)
        printf("\nAll negative Elements are :");
        if (neg_num < 0)
        {
           // neg_num = a[i];
            printf("\t%d", neg_num);
        }
        else
        {
            printf("\nThere are no negative elements");
        }
    }
    // printf(".");
    getch();
}