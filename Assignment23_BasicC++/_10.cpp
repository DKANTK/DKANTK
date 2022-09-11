// 10.Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int i, sum =0;
    cout<<"Enter 10 numbers of Array: ";
    
    for(i=0; i<10; i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }

    cout<<"Sum Of 10 iteam of Array --> "<<sum;
    return 0;
        
}