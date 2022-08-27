// 7. Write a recursive function to print squares of first N natural numbers 

#include<stdio.h>

void naturalNum(int);

int main()
{
    int n;
    printf("Enter the number of Natural No. to print :");
    scanf("%d",&n);
    printf("Square of first %d natural no.\n",n);
    naturalNum(n);
    return 0;
}

void naturalNum(int y)
{
   
   if( y>0)
   {
    naturalNum(y-1);
    printf("Square of %d --> %d\n",y,y*y);
   }
}