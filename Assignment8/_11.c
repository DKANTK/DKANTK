/* 3.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA    
       

*/


#include<stdio.h>


int main()
{
    int i,j,k;

    for( i=1; i<=5; i++)
    {
        k=64;
        for( j=1; j<=10; j++)
        {
            if(j>=6-i && j<=5)
            {
             k++;
             printf("%c",k);
            }
            else if(j>5 && j<=4+i)
            {
                k--;
            printf("%c",k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}