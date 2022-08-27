//  8. Write a program to find the second smallest number 
//     in an array.Take array values from the user


#include<stdio.h>

int * sortarray(int *);

int main()
{
    int arr[10];
     int i;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
      scanf("%d",&arr[i]);

    sortarray(&arr[0]);  

    printf("2nd Smallest numbers in array is %d",arr[1] );
    return 0;
}

int * sortarray(int *p)
{
  int i,j;
   for( i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(p[i]> p[j])
            {
               int tmp = p[j];
               p[j] = p[i];
               p[i] = tmp;
            }
        }
    } 
}