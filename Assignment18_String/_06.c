//  6. Write a function to check whether a given string is an alphanumeric string or not. 

#include<stdio.h>

int alphaNum(char []);

int main()
{
    int n;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    n = alphaNum(str);
    n?printf("yes, it is alphanumeric "):printf("not alphanumeric");
    
    return 0;  
}


int alphaNum(char str[])
{
    int i, count_alpha=0,count_digit=0;

    for(i=0; str[i]; i++)
    {
       if( str[i]>=65 && str[i]<=90)
          count_alpha++;
       else if( str[i]>=97 && str[i]<=122)
          count_alpha++; 
       else if( str[i]>=48 && str[i<=57])
          count_digit++;    
    }
    
    if(count_alpha>0 && count_digit>0)
       return 1;
    else
       return 0;   
}