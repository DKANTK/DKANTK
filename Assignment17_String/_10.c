// 10. Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

int main()
{
    int i,len=0,count=0;
    char str[20];
    char ch;

    printf("Enter String :");
    fgets(str,20,stdin);
    printf("Enter charater :");
    fflush(stdin);
    scanf("%c",&ch);

    for(i =0; str[i]; i++)
      len++;

    for( i=0; str[i]; i++)
    {
      if( str[i] == ch)
         count++;   
    }
    printf("frequency of %c in %s -->%d",ch,str,count);
      

    return 0;  
}