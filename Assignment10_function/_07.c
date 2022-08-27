// 7. Write a function to calculate the number of combinations
//  one can make from n items and r selected at a time. (TSRS) 

#include<stdio.h>

int factorial(int);
int combination(int , int );

int main()
{
    int num,r;
    printf("Enter the no. Of Items and item to select :");
    scanf("%d%d",&num,&r);

    printf("Total combination -->%d",combination(num,r));
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

    int combination(int n, int r)
    {
        int combi;
        // nCr = n!/(n-r)!*r!
        combi = factorial(n)/(factorial(r)*(factorial(n-r)));
        return combi;
    }
