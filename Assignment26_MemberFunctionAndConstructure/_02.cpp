/*
2. Define a class Time to represent a time with instance variables h,m and s 
   to store hour, minute and second. Also define following member functions
  a. void setTime(int,int,int)
  b. void showTime() 
  c. void normalize() 
  d. Time add(Time)
*/

#include<iostream>
using namespace std;

class Time {
    private:
     int h, m, s;

    public:
     void setTime( int x, int y, int z)
     {
        h = x; m = y; s = z;
     } 

     void normalize()
     {
        m = m + s/60;
        s = s%60;
        h = h + m/60;
        m = m%60;
     }
     void showTime()
     {
        cout<<h<<"h "<<m<<"m "<<s<<"s\n";
     }

     Time add(Time t)
     {
        Time tmp;
        tmp.h = h+t.h;
        tmp.m = m+t.m;
        tmp.s = s+t.s;
        return tmp; 
     }
};


int main()
{
    Time t1,t2,t3;
    t1.setTime(3,105,105);
    t2.setTime(3,105,60);
    t1.normalize();
    t2.normalize();
    t1.showTime();
    t2.showTime();
    t3 = t1.add(t2);
    t3.normalize();
    t3.showTime();
}