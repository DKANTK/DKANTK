/* 12.

ABCDCBA
 ABCBA
  ABA
   A

*/


#include<stdio.h>

int main()
{
    int i,j,k;

    for( i=1; i<=4; i++)
    {
        k=64;
        for( j=1; j<=7; j++)
        {
            if(j>=i && j<5)
            {
             k++;
             printf("%c",k);
            }
            else if(j>=5 && j<=8-i)
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