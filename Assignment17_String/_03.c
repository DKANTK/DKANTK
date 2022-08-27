// 3. Write a program to count vowels in a given string 



#include<stdio.h>

int main()
{
    int count=0,i;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    for( i=0; str[i]; i++)
      {
       if( str[i] == 'a' || str[i] ==  'A')
          count++;
       else if( str[i] == 'e' || str[i] ==  'E')
          count++;
       else if( str[i] == 'i' || str[i] ==  'I')
          count++;
       else if( str[i] == 'o' || str[i] ==  'O')
          count++;
       else if( str[i] == 'u' || str[i] ==  'U')
          count++;           
      }

    printf("Total Vowel in %s --> %d",str,count);
    return 0;  
}