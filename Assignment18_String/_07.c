//  7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>

int palindrome(char [], int);

int main()
{
    int i, n=-1;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    for(i=0; str[i]; i++)
       n++;

    n = palindrome(str, n);
    n?printf("yes, it is palindrome %d",n):printf("not alphanumeric %d",n);
    
    return 0;  
}

int palindrome(char str[], int n)
{
    int i;
    for(i=0; i<n/2; i++)
    {
        if(str[i] != str[n-1-i])
            return 0;
    }
    return 1;
}