/*
5. Define a class ReverseNumber and define an instance member
   function to find Reverse of a Number using class.
*/

#include<iostream>
using namespace std;

class ReverseNumber {
    private:
    int num;

    public:
    void setData(int n) {num = n;}
    void reverseNum();
};

void ReverseNumber :: reverseNum()
{
    int rev=0;
    while( num > 0)
    {
        rev =  rev*10 + num%10;
        num/=10;
    }
    cout<<"reverse of given number -->"<<rev;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    ReverseNumber r;
    r.setData(n);
    r.reverseNum();
}