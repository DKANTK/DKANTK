// 5. Write a program to find the smallest number stored in an array of size 10.
//   Take array values from the user.

#include<stdio.h>


int main()
{
    int arr[10];
    int i,smallest;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]<smallest)
        smallest = arr[i];
    }

    printf("Smallest numbers in array is %d", smallest);
    return 0;
}