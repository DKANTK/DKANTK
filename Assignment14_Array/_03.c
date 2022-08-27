// 3. Write a program to calculate the sum of all even numbers
// and sum of all odd numbers, which are stored in an array of size 10. 
//  Take array values from the user


#include<stdio.h>


int main()
{
    int arr[10];
    int i, even_sum=0, odd_sum=0;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]%2 == 0)
        even_sum = even_sum+arr[i];
      else 
        odd_sum = odd_sum+arr[i]; 
    }

    printf("Sum of even numbers in array is %d\n", even_sum);
    printf("Sum of odd numbers in array is %d", odd_sum);
    return 0;
}