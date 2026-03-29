#ifndef RENTAL_H
#define RENTAL_H

class Rental {
private:
    int days;

public:
    void setDays(int d) {
        days = d;
    }

    int calculate(int price) {
        return price * days;
    }
};
