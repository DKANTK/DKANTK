// 2. Write a function to reverse a string. 


#include<stdio.h>

void reverseStr(char *);

int main()
{
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

     reverseStr(&str[0]);
    printf("Reverse String is %s ",str);
    return 0;  
}

void reverseStr(char *str)
{
    int i,len=0;

    for( i=0; str[i]; i++)
      len++;

    for(i=0; i<(len-1)/2;i++)
    {
        char tmp = str[i];
        str[i] = str[len-2-i];
        str[len-2-i] = tmp;
    } 
}



