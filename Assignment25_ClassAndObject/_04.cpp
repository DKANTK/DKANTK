/*
4. Define a class LargestNumber and define an instance member function to
   find the Largest of three Numbers using the class
*/

#include<iostream>
using namespace std;


class LargestNumber {
    private: 
    int a,b,c;

    public:
    void setData(int x,int y, int z) {a = x; b = y; c = z;}
    void compareNum()
    {
        int greater;
        if(a>b)
        {
            if(a>c)
             greater = a;
            else
            greater = c;
        }
        else 
        {
            if(b>c)
             greater = b;
            else 
             greater = c; 
        }
        cout<<"Greater number is "<<greater;
    }
};


int main()
{
    int x,y,z;
    cout<<"Enter three Numbers: ";
    cin>>x>>y>>z;

    LargestNumber l;
    l.setData(x,y,z);
    l.compareNum();

    return 0;
}