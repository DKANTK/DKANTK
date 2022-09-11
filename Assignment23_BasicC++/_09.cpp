// 9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two number: ";
    cin>>n1>>n2;
    n1>n2 ? cout<<"Max is 1st number "<<n1 : cout<<"Max is 2nd number "<<n2;
    return 0;
}