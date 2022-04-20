/*
Program to find a element on a particular index (Traversing an array)
Author : Neeraj
Date : December 25, 2021
*/
#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#define max 100

void main()
{
    int a[max], i, ind, size, choice;

again:
    system("cls");

    printf("\nEnter Size of Array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("\nEnter value at %dth index : ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter Index number : ");
    scanf("%d", &ind);
    if (ind > size)
    {
        printf("\n:::::Index doesn't Exist:::::");
        goto new;
    }

    printf("\nThe Element at index %d is : %d", ind, a[ind]);
    new : printf("\n::::Want to Run Again::::\n(1)Yes\n(2)No\nEnter Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        goto again;
    }
    else if (choice == 2)
    {
        exit(0);
    }
    else
    {
        printf("\nInvalid! Choice");
    }
    getch();
}