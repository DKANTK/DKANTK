//  1. Write a recursive function to print first N natural numbers 


#include<stdio.h>

void naturalNum(int);

int main()
{
    int n;
    printf("Enter the number of Natural No. to print :");
    scanf("%d",&n);
    naturalNum(n);
    return 0;
}

void naturalNum(int y)
{
   
   if( y>0)
   {
    naturalNum(y-1);
    printf("%d ",y);
   }
}
  
