//  2. Write a recursive function to print first N natural numbers in reverse order 


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
    printf("%d ",y);
    naturalNum(y-1);
   }
}
  