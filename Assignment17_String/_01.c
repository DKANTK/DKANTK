// 1. Write a program to calculate the length of the string.
// (without using built-in method)

#include<stdio.h>

int main()
{
    int len=0,i;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    for( i=0; str[i]; i++)
      len++;

    printf("String length in %s is %d",str,len-1);
    return 0;  
}