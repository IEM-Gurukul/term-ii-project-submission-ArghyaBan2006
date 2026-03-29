#include <iostream>
#include "Car.h"
#include "Bike.h"
#include "Customer.h"
#include "Rental.h"
#include "Vehicle.h"

using namespace std;

int main() {
    int choice, vChoice, days;

    Car car;
    Bike bike;
    Customer cust;
    Rental rent;
    Vehicle veh;

    // Setting vehicle data using encapsulation
    car.setData("Sedan", 2000);
    bike.setData("Sports Bike", 800);

    cout << "===== VEHICLE RENTAL SYSTEM =====\n";

    while (true) {
        cout << "\n1. Rent Vehicle\n2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 2) {
            cout << "Thank you!\n";
            break;
        }

        cust.input();

        cout << "\nSelect Vehicle:\n";
        cout << "1. Car\n2. Bike\n";
        cin >> vChoice;

        cout << "Enter number of days: ";
        cin >> days;
        rent.setDays(days);

        if (vChoice == 1) {
            car.display();  // polymorphism
            int total = rent.calculate(car.getPrice());

            cust.display();
            cout << "Total Rent: " << total << endl;
        }
        else if (vChoice == 2) {
            bike.display();
            int total = rent.calculate(bike.getPrice());

            cust.display();
            cout << "Total Rent: " << total << endl;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
