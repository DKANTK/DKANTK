// 7. Write a recursive function to calculate HCF of two numbers

#include<stdio.h>

int hcf(int, int );

int main()
{
    int n1,n2;
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);

    printf("HCF of %d & %d is %d",n1,n2,hcf(n1,n2));
    return 0;
}


int hcf(int a, int b)
{
    static int comfac =1, i=2;

    if(i<=a && i<=b)
    {
       if( a%i ==0 && b%i==0 )
       {
         comfac = comfac*i;
         hcf(a/i, b/i);
       }
      else 
        {
         i++;
         hcf(a, b);
        }
    }
    else
      return comfac;
    
}