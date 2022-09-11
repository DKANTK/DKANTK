// 7. Define a class Box and write a program to enter length, breadth and height and initialise 
//    objects using constructor also define member functions to calculate volume of the box


#include<iostream>
using namespace std;


class Box {
    private:
      int l, b, h;

    public:
      Box(int x, int y, int z) { l = x; b = y; h = z;}  

      void volume()
      {
        int vol;
        vol = l*b*h;
        cout<<"length:"<<l<<" breadth:"<<b<<" height:"<<h<<endl;
        cout<<"Volume of Box is "<<vol;
      }
};

int main()
{
    Box b(4, 5, 6);
    b.volume();
    return 0;
}