// 4. Write a program to convert a given string into uppercase 


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
        if( str[i] >= 97 && str[i] <= 122)
           str[i] = str[i]-32;
    }  

    printf("String  in uppercase -> %s",str);
    return 0;  
}