// 2. Write a program to count the occurrence of a given character in a given string. 



#include<stdio.h>

int main()
{
    int count=0,i;
    char ch;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);
    printf("Enter charater :");
    scanf("%c",&ch);

    for( i=0; str[i]; i++)
      {
        if(str[i] == ch)
          count++;
      }

    printf("charater %c in %s is %d",ch,str,count);
    return 0;  
}