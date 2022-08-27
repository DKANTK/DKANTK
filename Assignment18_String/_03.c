//  3. Write a function to compare two strings.


#include<stdio.h>
#include<string.h>

int compareStr(char [], char []);

int main()
{
    int n;
    char str[20];
    char str2[20];

    printf("Enter 1st String :");
    fgets(str,20,stdin);
    printf("Enter 2st String :");
    fgets(str2,20,stdin);

    n = compareStr(str, str2);
    n?printf("match"):printf("not match");
    return 0;  
}

int compareStr(char str[], char str2[])
{
    int i,l1,l2,max;
    l1  = strlen(str); l2 = strlen(str2);
    max = l1>l2?l1:l2;

    for(i=0; i<max; i++)
    {
        if(str[i] != str2[i] )
          return 0;
    }
    return 1;
}

