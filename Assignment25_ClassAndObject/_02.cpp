/*
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). 
Declare appropriate number of instance member variables and also define
instance member functions to set values for time and display values of time.

*/

#include<iostream>
using namespace std;


class Time {
    private:
    int hr, min, sec;

    public:
    void setData(int x, int y, int z){
        hr = x; min = y; sec = z;
    }

    void showData(){
        cout<<"Entered time -->"<<hr<<" hr "<<min<<" min "<<sec<<" sec";
    }
};


int main()
{
    int hr, min, sec;
    cout<<"Enter time in ( x hr y min z sec) format: ";
    cin>>hr>>min>>sec;

    Time t;
    t.setData(hr, min,sec);
    t.showData();
    return 0;
}