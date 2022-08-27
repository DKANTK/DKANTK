// 5. 4. Write a function to transform string into lowercase  

#include<stdio.h>

void toLower(char *);

int main()
{
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    toLower(str);
    printf("String in lowercase %s",str);
    return 0;  
}

void toLower(char *str)
{
    int i;

    for(i=0; i,str[i]; i++)
    {
        if( str[i] >= 65 && str[i] <= 90)
           str[i] = str[i]+32;
    }  
}