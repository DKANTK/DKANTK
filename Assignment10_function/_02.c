// 2. Write a function to calculate simple interest. (TSRS) 

#include<stdio.h>

float simpleInterest(float, float, float );

int main()
{
    float amt, r, t, si;
    printf("Enter amount, interest rate and time :");
    scanf("%f%f%f",&amt,&r,&t);

    si = simpleInterest(amt, r, t);
    printf("Simple intrest --> %.2f",si);

    return 0;
}

float simpleInterest(float amt, float rate, float t){
    float si ;

    si = (amt*rate*t)/100;
    return si;
}