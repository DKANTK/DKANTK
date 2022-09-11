// 7. Write a function using the default argument that is able to add 2 or 3 numbers

#include<iostream>
using namespace std;

void sum(int, int, int=0);

int main()
{
    int choice, a,b,c;
    cout<<"Enter choice to add 2 or 3 number: ";
    cin>>choice;

    if(choice == 2)
    {
     cout<<"\nEnter two Numbers: ";
     cin>>a>>b;
     sum(a,b);   
    }
    else if(choice == 3)
    {
     cout<<"\nEnter three Numbers: ";
     cin>>a>>b>>c;
     sum(a,b,c);   
    }

    return 0;
    
}

void sum(int a, int b, int c)
{
    int sum =0;

    sum = a+b+c;
    cout<<"Sum of Numbers: "<<sum;
}