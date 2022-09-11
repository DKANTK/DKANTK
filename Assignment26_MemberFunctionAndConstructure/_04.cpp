// 4. Define a class Counter and Write a program to Show Counter using Constructor.


#include<iostream>
using namespace std;

class Counter {
    public:
    Counter(int n)
    {
        int i;
        for(i=1; i<=n; i++)
          cout<<i<<" ";
    }
};


int main()
{
    Counter c(15);
    return 0;
}