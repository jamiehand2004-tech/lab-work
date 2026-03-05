#include "SnowBoard.h"

Snowboard::Snowboard(double hr, double ms) : Equipment("SNOWBOARD", "Generic") {    
    hourlyRate = hr;
    maintenanceSurcharge = ms;

}

double Snowboard::getHourlyRate() {
    return hourlyRate;
}

double Snowboard::getMaintenanceSurcharge() {
    return maintenanceSurcharge;
}

double Snowboard::calculateRentalCost(int hours) const {
    return hourlyRate * hours + maintenanceSurcharge;
}
