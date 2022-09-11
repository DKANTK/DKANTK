/*
8. Define a class Rectangle and define an instance member
   function to find the area of the rectangle.
*/

#include<iostream>
using namespace std;

class Rectangle {
    private:
     int l, b;

    public:
     void setData(int x, int y) {l = x; b = y;}
     void area(){ cout<<"Area of Rectangle:-->"<<l*b;}
};

int main()
{
    int l,b;
    cout<<"Enter length and breadth of Rectangle: ";
    cin>>l>>b;

    Rectangle r;
    r.setData(l,b);
    r.area();

    return 0;
}