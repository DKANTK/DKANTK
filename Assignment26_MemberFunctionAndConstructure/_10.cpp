// 10.Define a class StaticCount and create a static variable.
//   Increment this variable in a function and call this 3 times 
//   and display the result.

#include<iostream>
using namespace std;

class StaticCount {
    private:
     static int a;

    public:
     static void increment();
     static void display();
 
};

 int StaticCount :: a =10;
 void StaticCount :: increment() { a+=1;}
 void StaticCount :: display() { cout<<a;}

 int main()
 {
    StaticCount :: increment();
    StaticCount :: increment();
    StaticCount :: increment();
    StaticCount :: display();
    return 0;
 }