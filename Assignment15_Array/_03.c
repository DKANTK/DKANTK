// 3. Write a function to sort an array of any size. (TSRS) 

#include<stdio.h>

int * sortArray(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);

    sortArray(&arr[0],n);
    printf("sorted array :");
    for(i=0; i<n; i++)
      printf("%d ",arr[i]);
    return 0;
}

int * sortArray(int *p, int n)
{
  int i,j;
   for( i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
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