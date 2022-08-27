// 5. Write a function to find the first occurrence of adjacent duplicate
// values in the array.   Function has to return the value of the element.

#include<stdio.h>

int findDublicate(int [], int);

int main()
{
    int n,i, dub;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);


    dub = findDublicate(arr, n);
    (dub == -1)?printf("There is no dublicate")
    :printf("first occurance at index %d and value is %d",dub, arr[dub]);
    
    return 0;
}


int findDublicate(int arr[], int n)
{
    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
              return i;
        }
    }
    return-1;
}