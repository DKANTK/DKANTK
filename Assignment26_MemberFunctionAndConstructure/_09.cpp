/*
9. Define a class Bill and define its member function get() to take detail of customer ,
 calculateBill() function to calculate electricity bill using below tariff : 
 Upto 100 unit RS. 1.20 per unit
 From 100 to 200 unit RS. 2 per unit 
 Above 200 units RS. 3 per unit.

*/

#include<iostream>
using namespace std;


class Bill {
    private: 
     string name;
     int unit;

    public:
     Bill() { name =""; unit = 0;} 
     void get(string name1,int x )
     {
        name  = name1;
        unit = x;
     }

     void calculateBill()
     {
        float cost;
        if(unit<=100)
          cost = unit*1.20;
        else if(unit<=200)
          cost  = 120 + (unit-100)*2;
        else if(unit>200)
          cost  = 220 + (unit-200)*3;

        cout<<"Name:"<<name<<" Total Unit:"<<unit<<endl;
        cout<<"Bill amount is "<<cost<<" Rupess\n\n";
     }
     
};

int main()
{
    Bill b1, b2, b3;
    b1.get("Deep",146);
    b1.calculateBill();
    b2.get("Vishwajeet",106);
    b2.calculateBill();
    b3.get("Bhartendu",246);
    b3.calculateBill();
    return 0;
}