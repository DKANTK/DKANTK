// 1. Write a function to find the greatest number from the given array of any size. (TSRS) 

#include<stdio.h>

int greatest(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);

    greatest(arr,n);
    return 0;
}

int greatest(int arr[], int n)
{
    int i,greatest=0;

    for(i=0;i<n; i++)
    {
        if(arr[i] > greatest)
          greatest = arr[i];
    }
    printf("Greatest number in array is %d", greatest);
}