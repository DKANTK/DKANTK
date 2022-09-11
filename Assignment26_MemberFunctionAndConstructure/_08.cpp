/*
8. Define a class Bank and define member functions to read principal ,
   rate of interest and year. Another member functions to calculate
   simple interest and display it. Initialise all details using constructor.
*/   

#include<iostream>
using namespace std;

class Bank {
    private:
     float principal, rate;
     int year;

    public:
     Bank(float p, float r, int y)
     {
        principal = p;
        rate = r;
        year = y;
     }   

     void simpleIntreast()
     {
        float si;
        si = (principal*rate*year)/100;
        cout<<"Simple Intreast on principal amount is "<<si;
     }
};

int main()
{
    Bank b(213000, 4, 7);
    b.simpleIntreast();
    return 0;
}
