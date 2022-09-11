/*
9. Define a class Circle and define an instance member
   function to find the area of the circle
*/

#include<iostream>
using namespace std;

class Circle {
    private:
     int radius;
     #define pi 3.14;

    public:
     void setData(int x) {radius = x;}
     void area() {cout<<"Area of Circle:-->"<<radius*radius*pi;}
};

int main()
{
    int r;
    cout<<"Enter Radius of Circle: ";
    cin>>r;

    Circle c;
    c.setData(r);
    c.area();

    return 0;
}