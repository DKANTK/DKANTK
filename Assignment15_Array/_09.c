// 9. Write a function in C to merge two arrays of the same
//    size sorted in descending order.


#include<stdio.h>

int * mergArray(int [], int [], int *, int);
//int * sortArray(int [], int);

int main()
{
    int n,i,total=2;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int arr3[2*n];

    while( total > 0)
    {
    printf("Enter %dth  %d size of array :",total,n);
    for(i=0; i<n; i++)
    {
      if(total == 1)  
      scanf("%d",&arr[i]);
      else
      scanf("%d",&arr2[i]);
    }
      total--;
    } 

    mergArray(arr,arr2,&arr3[0],n);
    
    printf("MergeArray :");
    for( i=0; i<2*n; i++)
      printf("%d ",arr3[i]);
    return 0;
}


int * mergArray(int arr[], int arr2[], int *arr3, int n)
{
    int i,j=0;
    int * sortArray(int [], int);
 

    for( i=0; i<2*n; i++)
    {
        if(i<n)
        arr3[i] = arr[i];
        else if( i>=n)
        {
           arr3[i] = arr2[j];
           j++;
        }
    }

    return sortArray(&arr3[0],2*n);
}


int * sortArray(int *p, int n)
{
  int i,j;
   for( i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(p[i]< p[j])
            {
               int tmp = p[j];
               p[j] = p[i];
               p[i] = tmp;
            }
        }
    } 
    return p;
}