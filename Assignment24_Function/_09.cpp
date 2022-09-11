// 9. Write functions using function overloading to find a maximum of
//    two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;

void max(int, int);
void max(float, float);

int main()
{
    int n1, n2;
    float n3,n4;
    
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    max(n1,n2);

    cout<<"\nEnter two real numbers: ";
    cin>>n3>>n4;
    max(n3, n4);
    return 0;

}

void max(int n1, int n2)
{
    n1>n2
    ?
    cout<<"max in two number is n1-->" <<n1
    :
    cout<<"max in two number is n2-->" <<n2;
}

void max(float n1, float n2)
{
    n1>n2
    ?
    cout<<"max in two number is n1-->" <<n1
    :
    cout<<"max in two number is n2-->" <<n2;
}