#include "Equipment.h"
#include "SkiEquipment.h"
#include "SnowBoard.h"
#include "Rental.h"
#include <iostream>
using namespace std;

int main () {
    Equipment eq1("EQ001", "BrandA");
    eq1.setBrand("BrandA");
    eq1.displayDetails();

    SnowBoard sb(15.0, 5.0);
    cout << "Snowboard Rental Cost for 4 hours: $" << sb.calculateRentalCost(4) << endl;
    
    Rental rental(&eq1, 5);
    cout << "Rental Cost for 5 hours: $" << rental.calculateTotalCost() << endl;
    
    cin.get();
    return 0;
}