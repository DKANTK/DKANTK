
// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;


class Cube {
    private:
     int a;

    public:
     Cube(int x) { a = x;} 

     void volume()
     {
        int vol;
        vol = a*a*a;
        cout<<"Volume of cube is "<<vol;
     }
};


int main()
{
    Cube c(5);
    c.volume();
    return 0;
}