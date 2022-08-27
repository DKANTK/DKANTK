// 9. Write a recursive function to print octal of a given decimal number 

#include<stdio.h>

void numToBinary(int);

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    numToBinary(n);
    return 0;
}

void numToBinary(int y)
{
   
   if( y>0)
   {
    numToBinary(y/8);
    printf("%d",y%8);
   }
}