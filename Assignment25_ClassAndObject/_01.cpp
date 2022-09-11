/*
1. Define a class Complex to represent a complex number.
   Declare instance member variables to store real and imaginary part of a complex number, 
   also define instance member functions to set values of complex number and print values of complex number
*/

#include<iostream>
using namespace std;


class Complex {
    private:
    int real, imaginary;

    public:
    void setData(int x, int y){
        real = x; imaginary = y;
    }

    void showData(){
        cout<<"complex number -->"<<real<<" + "<<imaginary<<"i";
    }
};


int main()
{
    int r, i;
    cout<<"Enter real and imaginary part: ";
    cin>>r>>i;

    Complex c;
    c.setData(r,i);
    c.showData();
    return 0;
}