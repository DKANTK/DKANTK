/*
10.Define a class Area and define instance member functions 
to find the area of the different shapes like square, rectangle , circle etc

*/

#include<iostream>
using namespace std;

class Area {
   
    public:
     void square (int s)
     {
        cout<<"Area of square -->"<<s*s;
     } 

     void rectangle (int l, int b)
     {
        cout<<"Area of Rectangle:-->"<<l*b;
     }

     void circle(int radius)
     {
        cout<<"Area of Circle:-->"<<radius*radius*3.14;
     }
};

int main()
{
      int l,b,r,s,choice;
      cout<<"Enter your chioce rectangle-1, square-2, circle-3: ";
      cin>>choice;

      Area a;
      if(choice ==1)
      {
        cout<<"Enter length and Breadth: ";
        cin>>l>>b;
        a.rectangle(l,b);
      }
      else if(choice == 2)
      {
        cout<<"Enter side length: ";
        cin>>s;
        a.square(s);
      }
      else if(choice ==3)
      {
        cout<<"Enter radius: ";
        cin>>r;
        a.circle(r);
      }

      return 0;
}