//  7. Write a program to find second largest in an array.
//  Take array values from the user.

#include<stdio.h>


int main()
{
    int arr[10];
    int i, lar=0, lar_2=0;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]>lar)
      {
        lar_2 = lar;
        lar = arr[i];
      }
    }

    printf("2nd largest numbers in array is %d", lar_2);
    return 0;
}
