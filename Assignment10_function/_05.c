//5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void firstN_Odd(int);

int main()
{
    int num;
    printf("Enter count of Odd number have to print :");
    scanf("%d",&num);

    firstN_Odd(num);
    return 0;
    }

    void firstN_Odd(int n)
    {
      int i=1, count=0;
      while( count<n )
      {
       printf("\n%d",i); 
       count++;
       i+=2;
      }
    }