#include "Rental.h"

Rental::Rental()
{
    equipment = nullptr;
    rentalDuration = 5;
}

void Rental::display()
{
    equipment->displayDetails();
    cout << "Rental Duration: " << rentalDuration << " hours" << endl;
}
double Rental::calculateTotalCost() {
    if (equipment) {
        return equipment->calculateRentalCost(rentalDuration);
    }
    return 0.0;
}