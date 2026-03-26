#include <iostream>
using namespace std;

class Vehicle {
public:
    string name;
    int price;

    void display() {
        cout << "Vehicle: " << name << endl;
        cout << "Price: " << price << endl;
    }
};
