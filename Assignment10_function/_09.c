// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
#include<stdbool.h>

bool checkDigit(int , int);

int main()
{
    int num, digit,t_f;
    printf("Enter number and digit :");
    scanf("%d%d",&num,&digit);

    t_f =  checkDigit(num, digit);
    t_f?printf("digit is present"):printf("not present");

}

bool checkDigit(int n, int d)
{ 
    int digit;
    while (n>0)
    {
        digit = n%10;
        if( d == digit)
          return true;
        n= n/10;  
    }
    return false;
    
}