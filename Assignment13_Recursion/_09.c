// 9. Write a program in C to count the digits of a given number using recursion. 

#include<stdio.h>

int countDigit(int);

int main()
{
    int num, count=0;
    printf("Enter the Number :");
    scanf("%d",&num);

    //count =  countDigit(num);
    printf("total digit in  is %d",  countDigit(num) );
    return 0;
}


int countDigit(int y)
{
    static int count=0;

    if(y > 0)
    {
        count++;
        countDigit( y/10);
    }
    else
    return count;
}

