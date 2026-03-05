#ifndef SKIEQUIPMENT_H
#define SKIEQUIPMENT_H

#include <string>
#include "Equipment.h"
#include <vector>
using namespace std;

class SkiEquipment {

private:
    string type;
    double hourlyRate;

public:

    SkiEquipment() {}
    SkiEquipment(string t) : type(t) {}
    string getType() const { return type; }
    double getHourlyRate() const { return hourlyRate; }
    void setHourlyRate(double rate) { hourlyRate = rate; }

    
};





























#endif