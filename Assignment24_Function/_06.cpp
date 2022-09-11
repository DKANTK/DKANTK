// 6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swapNum(int &, int &);

int main ()
{
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    swapNum(a, b);
    cout<<"First -->"<<a<<endl<<"Second -->"<<b;
    return 0;
}

void swapNum(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}


