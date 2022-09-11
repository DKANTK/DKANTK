/*
7. Define a class Greatest and define instance member function
   to find Largest among 3 numbers using classes
*/

#include<iostream>
using namespace std;


class Greatest {
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

    Greatest g;
    g.setData(x,y,z);
    g.compareNum();

    return 0;
}