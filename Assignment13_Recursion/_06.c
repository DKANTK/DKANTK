//  6. Write a recursive function to calculate factorial of a given number

#include<stdio.h>

int fact(int);

int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);

    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}

int fact(int y)
{
    if( y == 1)
      return 1;

     return y*fact(y-1); 
}