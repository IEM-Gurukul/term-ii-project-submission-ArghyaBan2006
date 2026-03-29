#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name;
    int price;

public:
    void setData(string n, int p) {
        name = n;
        price = p;
    }

    int getPrice() {
        return price;
    }

    virtual void display() {
        cout << "Vehicle: " << name << endl;
        cout << "Price per day: " << price << endl;
    }
};
