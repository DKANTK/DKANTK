/*
3. Define a class Factorial and define an instance member function
   to find the Factorial of a number using class.
*/

#include<iostream>
using namespace std;

class Factorial {
    private:
    int num;

    public:
    void setData(int x) {num = x;}
    int fact(int); //  function declaration 
    void showData(){ cout<<"Factorial of "<<num<<" is "<<fact(num);}
};
// member function defination outside class
int Factorial ::fact(int num)
{
    int fa =1;
    while (num > 0)
    {
        fa = fa*num;
        num-=1;
    }
    
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    // instance/object creation
    Factorial fac;
    fac.setData(n);
    fac.showData();

    return 0;
}