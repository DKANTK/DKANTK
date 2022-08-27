// 6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int factorial(int);

int main()
{
    int num;
    printf("Enter the number for factorial :");
    scanf("%d",&num);

    printf("%d",factorial(num));
    return 0;
    }

    int factorial(int n)
    {
      int i=1, fact=1;
      while( n>0 )
      {
       fact = fact*n;
       n = n-1;
      }
      return fact;
    }