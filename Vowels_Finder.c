/*
Progra to print number of vowels present in a string
Author : Neeraj
Date : January 21, 2022
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 0, count = 0;
    char str[500];
    printf("\nEnter a string : ");
    gets(str);
    for (; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            count++;
        }  
    }  
    printf("\nThe number of vowels in the string is : %d", count);
    getch();
}