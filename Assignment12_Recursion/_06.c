// 6. Write a recursive function to print first N even natural numbers in reverse order 

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
    if(y %2 == 1 && y >0)
    {
        y--;
        printf("%d ",y);
        printOdd(y-2);
        
    }
    else if( y>0)
    {
        printf("%d ",y);
        printOdd(y-2);
     
    }
}