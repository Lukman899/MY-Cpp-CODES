#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print()
    {
        cout <<name << " " <<power << " " <<mileage << " " <<isE20Compatible << endl;
    }
};

int main()
{
    Car c1;
    c1.name = "Aura HYUNDAI";
    c1.power = 118;
    c1.mileage = 9.2;
    c1.isE20Compatible = true; // order not required
    // cout<<c1.name<<endl;

    Car c2 = {"Toyota Fortuner", 200, 7.6, false}; // order  required
    // cout<<c2.name<<endl;

    c1.print();
    c2.print();
}