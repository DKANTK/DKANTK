/* 14.
*
**
* *
*  *
*****
*/


#include<stdio.h>

int main()
{
    int i,j;

    for( i=1; i<=5; i++)
    {
        for( j=1; j<=5; j++)
        {
            if( j<=i && ( i==5 || i<=2))
             printf("*");
            else if( j<=i){
              if(j>1 && j<=i-1)
               printf(" ");
               else
               printf("*");
            }
        }
        printf("\n");
    }
}