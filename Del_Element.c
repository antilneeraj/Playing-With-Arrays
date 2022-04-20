/*
Program to delete an element from array.
Author : Neeraj
Date : January 15, 2022
*/
#include <stdio.h>
#include <conio.h>
#define max 50

void main()
{
	int i, n, in, a[max], count = 0;
	system("cls");
	printf("\nEnter the number of Elements : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element on index %d : ", i);
		scanf("%d", &a[i]);
	}
	printf("Enter the element you want to delete : ");
	scanf("%d", &in);
	printf("\nArray before deletion : \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\nArray after deleting element %d :\n", in);
	for(i = 0; i<n; i++)
	{
		if(in == a[i])
		{
			for(; i < n-1; i++)
			{
				a[i] =  a[i + 1];
				printf("%d\t", a[i]);
			}
			break;
		}
		printf("%d\t", a[i]);
	}
	getch();
}