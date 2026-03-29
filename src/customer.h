#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    void display() {
        cout << "\n--- Bike Details ---\n";
        Vehicle::display();
        cout << "Type: Bike" << endl;
    }
};
