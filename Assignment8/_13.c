/* 13.
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A 
       

*/


#include<stdio.h>

int main()
{
    int i,j,k;

    for( i=1; i<=7; i++)
    {
        k=64;
        for( j=1; j<=13; j++)
        {
            if(j<=8-i)
            {
             k++;
             printf("%c",k);
            }
            else if(j>=6+i)
            {
                 if( k==71)
                {
                k--;
                printf("%c",k);
                k--;
                }
                else
               {
               printf("%c",k);
               k--;
                }
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}