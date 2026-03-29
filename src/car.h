#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    void display() {
        cout << "\n--- Car Details ---\n";
        Vehicle::display();
        cout << "Type: Car" << endl;
    }
};
