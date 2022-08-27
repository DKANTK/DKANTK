//  4. Write a function to transform string into uppercase 


#include<stdio.h>

void toUpper(char *);

int main()
{
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    toUpper(str);
    printf("String in uppercase %s",str);
    return 0;  
}

void toUpper(char *str)
{
    int i;

    for(i=0; i,str[i]; i++)
    {
        if( str[i] >= 97 && str[i] <= 122)
           str[i] = str[i]-32;
    }  
}