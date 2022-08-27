// 1. Write a function to calculate length of the string 


#include<stdio.h>

int lenOfStr(char []);

int main()
{
    int n;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    n = lenOfStr(str);
    printf("String length in %s is %d",str,n);
    return 0;  
}

int lenOfStr(char str[])
{
    int len=0,i;

    for( i=0; str[i] !='\n'; i++)
      len++;

    return len;  
}

