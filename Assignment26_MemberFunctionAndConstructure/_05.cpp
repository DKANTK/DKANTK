// 5. Define a class Date and write a program to Display Date and initialise date object using Constructors.

#include<iostream>
using namespace std;

class Date {
    private:
     int d, m, yr;

    public:
     Date(int x, int y, int z)
     { d = x; m = y; yr = z;} 

     void showdate()
     {
        cout<<"Date -->"<<d<<"/"<<m<<"/"<<yr;
     }

};

int main()
{
    Date date(15,02,1999);
    date.showdate();
    return 0;
}