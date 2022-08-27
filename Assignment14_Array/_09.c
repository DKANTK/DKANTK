// 9. Write a program in C to read n number of values in an array and 
//    display it in reverse order. Take array values from the user.


#include<stdio.h>


int main()
{
    int arr[10];
    int i;

    printf("Enter the 10 number of array :");

    for(i=0; i<10; i++)
      scanf("%d",&arr[i]);

    for(i=0; i<10/2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = tmp;
    }  
    printf("Reverse array\n");
    for(i=0; i<10; i++)
     printf("%d ",arr[i]);

    
    return 0;
}