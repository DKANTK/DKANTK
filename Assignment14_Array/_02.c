// 2. Write a program to calculate the average of numbers stored
//    in an array of size 10. Take array values from the user

#include<stdio.h>


int main()
{
    int arr[10];
    int i, sum=0;
    float avg;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
    {
      scanf("%d",&arr[i]);
      sum = sum+arr[i];
    }

    avg  = (float)sum/10;

    printf("Average of numbers in array is %.2f", avg);
    return 0;
}