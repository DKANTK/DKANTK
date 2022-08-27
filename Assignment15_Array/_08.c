//  8. Write a function in C to print all unique elements in an array.


#include<stdio.h>

void unique(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
    unique(arr,n);
    return 0;
}


void unique(int arr[], int n)
{
    int i, j, count=0,unique=0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i] == arr[j] && i != j)
              count++;
        }
        if(count == 0)
          unique++;
    }
    printf("Total Unique element are :%d",unique);
 
}