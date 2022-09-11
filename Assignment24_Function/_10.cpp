// 10.Write functions using function overloading to add two
//    numbers having different data types

#include<iostream>
using namespace std;

void sum(int, int);
void sum(float, float);

int main()
{
    int choice, a,b;
    float c,d;
    cout<<"Enter choice to add integer-1, float-2 number: ";
    cin>>choice;

    if(choice == 1)
    {
     cout<<"\nEnter two integer Numbers: ";
     cin>>a>>b;
     sum(a,b);   
    }
    else if(choice == 2)
    {
     cout<<"\nEnter two float Numbers: ";
     cin>>c>>d;
     sum(c,d);   
    }

    return 0;
    
}

void sum(int a, int b)
{
    int sum =0;

    sum = a+b;
    cout<<"Sum of Numbers: "<<sum;
}

void sum(float c, float d)
{
    float sum =0;

    sum = c+d;
    cout<<"Sum of Numbers: "<<sum;
}