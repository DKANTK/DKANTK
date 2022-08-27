/* 10.

     1234321
     123 321
     12   21
     1     1
       

*/


#include<stdio.h>

int main()
{
    int i,j,k;

    for( i=1; i<=4; i++)
    {
        k=0;
        for( j=1; j<=7; j++)
        {
            if(j<=5-i)
            {
             k++;
             printf("%d",k);
            }
            else if(j>=3+i)
            { 
                if( k==4)
                {
                k--;
                printf("%d",k);
                }
                else
                {
               printf("%d",k);
               k--;
                }
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}