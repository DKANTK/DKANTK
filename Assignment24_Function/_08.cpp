// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
#include<math.h>
using namespace std;

void area(int, int, int);
void area(int, int);
void area(int);

int main()
{
    int choice,l,r,a,b,c;
    cout<<"Enter choice for circle-1, for rectangle-2, tringle-3: ";
    cin>>choice;

    if(choice == 1)
    {
        cout<<"\nEnter radius: ";
        cin>>r;
        area(r);
    }
    else if( choice == 2)
    {
        cout<<"\nEnter length and breadth: ";
        cin>>l>>b;
        area(l, b);
    }
    else if(choice == 3)
    {
        cout<<"\nEnter 3 sides of traingle: ";
        cin>>a>>b>>c;
        area(a,b,c);
    }

    return 0;
}

void area(int r)
{
    int area=0;

    area = 3.14*r*r;
    cout<<"area of Circle: "<<area;
}

void area(int l, int b)
{
    int area =0;

    area = l*b;
    cout<<"area of Rectangle: "<<area;

}

void area(int a, int b, int c)
{
    int area =0,s=0,pra=0;

    s = a+b+c;
    pra = s*(s-a)*(s-b)*(s-c);
    
    area = pow(pra,0.5);
   
    cout<<"area of Tringle: "<<area;
}