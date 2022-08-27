// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>

int sumOfOdd(int);

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    printf("sum of first %d Odd --> %d ",n, sumOfOdd(2*n));
    return 0;
}

int sumOfOdd(int y)
{  
    if(y %2 == 0 && y >=1)
    {
        y--;
       return y + sumOfOdd(y-1);
    }
    else if( y>0)
       return  y + sumOfOdd(y-2);
}