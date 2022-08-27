// 6. Write a function in C to read n number of values in
//    an array and display it in reverse order.


#include<stdio.h>

void reverseArray(int [], int);

int main()
{
    int n,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
    reverseArray(arr,n);

    return 0;
}

void reverseArray(int p[], int n)
{
    int i;

    for(i=0; i<n/2; i++)
    {
        int tmp = p[i];
        p[i] = p[n-i-1];
        p[n-1-i] = tmp;
    }
    printf("reversed array :");
    for(i=0; i<n; i++)
      printf("%d ",p[i]);
}

