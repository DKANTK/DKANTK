//8. Write a function to calculate the number of arrangements
//   one can make from n items and r selected at a time. (TSRS


#include<stdio.h>

int factorial(int);
int arrangement(int , int );

int main()
{
    int num,r;
    printf("Enter the no. Of Items and item to arrange :");
    scanf("%d%d",&num,&r);

    printf("Total arrangement -->%d",arrangement(num,r));
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

    int arrangement(int n, int r)
    {
        int arrang;
        // nPr = n!/(n-r)
        arrang = factorial(n)/(factorial(n-r));
        return arrang;
    }
