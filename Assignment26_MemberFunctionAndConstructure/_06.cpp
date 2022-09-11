// 6. Define a class student and write a program to enter student details using constructor and
//    define member function to display all the details.

#include<iostream>
using namespace std;

class Student{
    private:
     string name;
     int cl, roll;
     string course;

    public:
     Student(string str1,int cla, int rolls, string str2) 
     {
        name  = str1;
        cl = cla;
        roll = rolls;
        course = str2;
     }

     void display()
     {
        cout<<"name: "<<name<<"\nclass: "<<cl<<"\nroll: "<<roll<<"\ncourse: "<<course;
     }
};

int main()
{
    Student s("Deep", 12, 26, "science");
    s.display();
    return 0;
}