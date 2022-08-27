// 5. Write a recursive function to calculate sum of digits of a given number 


#include<stdio.h>

int sumOfreverse(int);

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("sum of digit of number is %d",sumOfreverse(n));
    return 0;
}

int sumOfreverse(int y)
{
   
   if( y>0)
   {
     return y%10 + sumOfreverse(y/10);
   }
}