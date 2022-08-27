// 8. Write a program in C to copy one string to another string. 

#include<stdio.h>

int main()
{
    int i;
    char str[20];
    char str1[20]="";

    printf("Enter String :");
    fgets(str,20,stdin);

    for( i=0; str[i]; i++)
        str1[i] = str[i];


    printf("Copy string -->%s",str1);
    return 0;  
}