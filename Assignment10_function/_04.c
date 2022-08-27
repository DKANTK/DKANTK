// 4. Write a function to print first N natural numbers (TSRN) 

#include<stdio.h>

void firstN_Natural(int);

int main()
{
    int num;
    printf("Enter count of Natural number have to print :");
    scanf("%d",&num);

    firstN_Natural(num);
    return 0;
    }

    void firstN_Natural(int n)
    {
    int i;
    for(i=1; i<=n; i++)
     printf("\n%d",i); 
    }