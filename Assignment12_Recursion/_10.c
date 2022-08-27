// 10. Write a recursive function to print reverse of a given number 

#include<stdio.h>

void reverse(int);

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

void reverse(int y)
{
   
   if( y>0)
   {
    printf("%d",y%10);
    reverse(y/10);
   }
}