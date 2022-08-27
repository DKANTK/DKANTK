// 4. Write a recursive function to calculate sum of squares of first n natural numbers 


#include<stdio.h>

int sumOfSqrOfNatural(int);

int main()
{
    int n;
    printf("Enter the number of Natural No. to sum :");
    scanf("%d",&n);
    printf("sum of Square of first %d natural no. is %d",n, sumOfSqrOfNatural(n));
    return 0;
}

int sumOfSqrOfNatural(int y)
{
   
   if( y>0)
   return (y*y) + sumOfSqrOfNatural(y-1);
}