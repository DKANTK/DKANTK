// 4. Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;
#define pi 3.14;

int main()
{
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area of Circle is "<<(r*r)*pi;
    return 0;
}