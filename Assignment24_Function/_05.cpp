// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

void checkFibo(int);

int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    checkFibo(num);
    return 0;
}

void checkFibo(int n)
{
    int n1=0, n2=1,n3=-1,found=-1;

    while ( n3 < n)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        if( n == n3 || n == 0)
         found = 1;
          
    }

    if(found == 1)
      cout<<"yes, present in fibonacci series";
    else 
      cout<<"Not Present in Fibonacci series";  
    
}