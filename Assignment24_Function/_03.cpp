// 3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

void powerXtoY(int, int);

int main()
{
    int b, e;
    cout<<"Enter base and exponent: ";
    cin>>b>>e;
    powerXtoY(b, e);
    return 0;
}

void powerXtoY(int b, int e )
{
    int ex=e, res=1;
    
    while( e>0)
    {
        res*=b;
        e-=1;
    }
    cout<<"base "<<b<<" to the power "<<ex<<" is eaual to "<<res;
}