// 8. Write a recursive function to print first N terms of Fibonacci series 

#include<stdio.h>

 void printFab(int, int, int );


 int main()
 {
    int n, n1=0,n2=1;
    printf("Enter number :");
    scanf("%d",&n);

    printf("0 1 ");
    printFab(n1, n2, n );
    return 0;
 }



void printFab(int n1, int n2, int n)
{
    int n3;

    if(n>2)
    {
        n3 = n1 + n2;
        printf("%d ",n3);
        n1 = n2;
        n2 = n3; 
        printFab( n1, n2, n-1);

    }
}
