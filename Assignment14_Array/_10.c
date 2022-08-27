// 10.Write a program in C to copy the elements of one array into another array.
// Take array values from the user.



#include<stdio.h>


int main()
{
    int arr[10];
    int arr1[10];
    int i;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
      scanf("%d",&arr[i]);
    
    for(i=0; i<10; i++)
    {
      arr1[i] = arr[i];
      printf("%d ",arr1[i]);
    }

    return 0;
}