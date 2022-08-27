// 5. Write a program to convert a given string into lowercase


#include<stdio.h>

int main()
{
    int len=0,i;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    for( i=0; str[i]; i++)
      len++;

    for(i=0; i,str[i]; i++)
    {
        if( str[i] >= 65 && str[i] <= 90)
           str[i] = str[i]+32;
    }  

    printf("String  in Lowercase -> %s",str);
    return 0;  
}