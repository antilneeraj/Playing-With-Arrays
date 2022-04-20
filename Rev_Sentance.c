/*
Program to reverse any sentence
Author : Neeraj
Date : December 26,2021
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define max 100

void main()
{
    int i, size, right;
    char str[max], sen;
    system("cls");
    printf("Enter a word to be reversed: ");
    scanf("%s", &str);
    size = strlen(str);
    right = size - 1;

    for (i = 0; i < right; i++)
    {
        sen = str[i];
        str[i] = str[right];
        str[right] = sen;
        right--;
    }
    printf("The reversed word is : %s", str);
    getch();
}