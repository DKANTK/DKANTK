/* 9.

     1234321
      12321
       121
        1
       

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
            if(j>=i && j<5)
            {
             k++;
             printf("%d",k);
            }
            else if(j>=5 && j<=8-i)
            {
                k--;
            printf("%d",k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}