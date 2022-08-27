// 4. Write a program to find the greatest number stored in an array of size 10.
//    Take array values from the user.


#include<stdio.h>


int main()
{
    int arr[10];
    int i, greatest =0;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]>greatest)
        greatest = arr[i];
    }

    printf("Greastest numbers in array is %d", greatest);
    return 0;
}