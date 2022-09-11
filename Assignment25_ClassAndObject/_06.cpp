/*
6. Define a class Square to find the square of a number and write a C++
   program to Count number of times a function is called.
*/

#include<iostream>
using namespace std;

class Square {
    private: 
     int num;

    public:
     void setData(int x) {num = x;} 
     void square() {cout<<"Square of "<<num<<" -->"<<num*num;} 
};

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    Square s;
    s.setData(n);
    s.square();

    return 0;
}