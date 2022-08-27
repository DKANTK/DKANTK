// 10. Write a program in C to calculate the power of any number using recursion. 
 
#include<stdio.h>

int powerOfNum(int, int);


int main()
{
    int base, expo;
    printf("Enter Base and Exponent :");
    scanf("%d%d",&base,&expo);

    printf("%d to the power %d equal to %d",base,expo,powerOfNum(base, expo));
    return 0;
}


int powerOfNum(int b, int e)
{
   if(e>1)
   {
    return b*powerOfNum(b, e-1);
   } 
}