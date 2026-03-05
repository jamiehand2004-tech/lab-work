#include "DayRentalRecord.h"
DayRentalRecord::DayRentalRecord() {
    // Constructor implementation (if needed)
}

void DayRentalRecord::printAllRentals() {
    for (const Rental& rental : rentals) {
        rental.display();
    }
}