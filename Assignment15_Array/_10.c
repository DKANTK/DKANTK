// 10. Write a function in C to count the frequency of each element of an array.


#include<stdio.h>

void frequency(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
    frequency(arr,n);
    return 0;
}


void frequency(int arr[], int n)
{
    int i, j, count;

    for(i=0; i<n; i++)
    {   count=1;
        for(j=0; j<n; j++)
        {
            if(arr[i] == arr[j] && i != j)
              count++;
        }
        printf("Frequency of %d in array is %d\n",arr[i],count);
    }
}