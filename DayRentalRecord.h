#pragma once

#include "Rental.h"
#include <vector>
using namespace std;




class DayRentalRecord{
    // Class definition
    vector<Rental> rentals;
public:
    void printAllRentals();
    DayRentalRecord();
    void addRental(const Rental& rental) {
        rentals.push_back(rental);
    }
};