// 1. Write a recursive function to calculate sum of first N natural numbers 


#include<stdio.h>

int naturalNumSum(int);

int main()
{
    int n;
    printf("Enter the number of Natural No. to sum :");
    scanf("%d",&n);
    printf("Sum of %d natural number --> %d",n,naturalNumSum(n));
    return 0;
}

int naturalNumSum(int y)
{
   
   if( y>0)
   {
    return y + naturalNumSum(y-1);
   }
}
  