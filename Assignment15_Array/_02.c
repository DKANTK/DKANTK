// 2. Write a function to find the smallest number from the given array of any size. (TSRS) 

#include<stdio.h>

int smallest(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);

    smallest(arr,n);
    return 0;
}

int smallest(int arr[], int n)
{
    int i,smallest=arr[0];

    for(i=1;i<n; i++)
    {
        if(arr[i] < smallest)
          smallest = arr[i];
    }
    printf("Smallest number in array is %d", smallest);
}