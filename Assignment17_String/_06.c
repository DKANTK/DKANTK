// 6. Write a program to reverse a string



#include<stdio.h>

int main()
{
    int len=0,i;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    for( i=0; str[i]; i++)
      len++;

    for(i=0; i<(len-1)/2;i++)
    {
        char tmp = str[i];
        str[i] = str[len-2-i];
        str[len-2-i] = tmp;
    }  

    printf("Reverse String %s",str);
    return 0;  
}