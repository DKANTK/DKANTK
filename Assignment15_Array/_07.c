// 7. Write a function in C to count a total number of duplicate elements in an array

#include<stdio.h>

int dubliEle(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);

    printf("total dublicate item -> %d",dubliEle(arr,n));
    return 0;
}


int dubliEle(int arr[], int n)
{
    int i, j, count=0;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
             {
                count++;
                break;
             }
        }
    }
    return count;
}