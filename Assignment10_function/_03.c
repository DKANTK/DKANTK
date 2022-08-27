// 3. Write a function to check whether a given number is even or odd. 
//    Return 1 if the number is even, otherwise return 0. (TSRS) 


#include<stdio.h>

int evenOrOdd(int);

int main()
{
    int num;
    printf("Enter the number -->");
    scanf("%d",&num);
    
    printf("%d",evenOrOdd(num));

    return 0; 
}

int evenOrOdd(int num){

    if( num%2 == 0)
      return 1;
    else
      return 0;
}