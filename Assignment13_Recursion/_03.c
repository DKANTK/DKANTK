// 3. Write a recursive function to calculate sum of first N odd natural numbers


#include<stdio.h>

int sumOfEven(int);

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    printf("sum of first %d even --> %d",n, sumOfEven(2*n));
    return 0;
}

int sumOfEven(int y)
{  
    if(y %2 == 1 && y >0)
    {
        y--;
        return y+sumOfEven(y-2);
       
        
    }
    else if( y>0)
       return y + sumOfEven(y-2);

}