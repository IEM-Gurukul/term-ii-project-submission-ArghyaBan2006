#include <iostream>
using namespace std;

class Customer {
public:
    string name;

    void input() {
        cout << "Enter customer name: ";
        cin >> name;
    }
};
