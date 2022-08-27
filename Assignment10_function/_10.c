// 10. Write a function to print all prime factors of a given number. For example,
// if the number is 36 then your result should be 2, 2, 3, 3. (TSRN) 

#include<stdio.h>

void factors(int);

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    factors(num);
    return 0;
}

void factors(int n)
{
    int i =2;
    while( i<=n)
    {
        if(n%i == 0)
         {
            printf("%d ",i);
            n = n/i;
         }
        else
        i++; 
    }
}