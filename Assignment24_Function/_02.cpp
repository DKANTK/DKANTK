// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

void maxDigit(int);

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    maxDigit(num);
    return 0;
}

void maxDigit(int n)
{
    int i=0, max=0;
    
    while( n>0)
    {
        int digit = n%10;
        n/=10;
        if(max<digit)
          max = digit;
    }
    cout<<"Highest value digit in Number is "<<max;
}