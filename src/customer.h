#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

class Customer {
private:
    string name;

public:
    void input() {
        cout << "Enter customer name: ";
        cin >> name;
    }

    void display() {
        cout << "Customer: " << name << endl;
    }
};
