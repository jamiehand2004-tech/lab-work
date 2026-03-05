#ifndef RENTAL_H
#define RENTAL_H
#include <string>
#include "Equipment.h"
using namespace std;

class Rental {
    private:
        Equipment* equipment;
        int rentalDuration; // in hours

    public:
        Rental();
        Rental(Equipment* eq, int duration) :equipment(eq), rentalDuration(duration) {}

        Equipment* getEquipment() const { return equipment; }
        int getRentalDuration() const { return rentalDuration; }

        double calculateTotalCost(){
            
        }   
        void display();
};  

#endif // RENTAL_H
