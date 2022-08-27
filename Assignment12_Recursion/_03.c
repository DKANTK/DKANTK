//  3. Write a recursive function to print first N odd natural numbers 

#include<stdio.h>

void printOdd(int);

int main()
{
    int n;
    printf("Enter number to print :");
    scanf("%d",&n);

    printOdd(2*n);
    return 0;
}

void printOdd(int y)
{  
    if(y %2 == 0 && y >0)
    {
        y--;
        printOdd(y-2);
        printf("%d ",y);
        
    }
    else if( y>0)
    {
        printOdd(y-2);
        printf("%d ",y);
    }
}