// 1. Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

void checkPrime(int);

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    checkPrime(num);
    return 0;
}

void checkPrime(int n)
{
    int count=0;

    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
         count+=1; 
    }

    if(count == 0)
      cout<<n<<" is Prime Number";
    else 
      cout<<n<<" is Not a Prime Number";  
}