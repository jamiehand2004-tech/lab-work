#ifndef _SNOWBOARD_H
#define _SNOWBOARD_H
#include "Equipment.h"

class Snowboard : public Equipment {
private:
    double hourlyRate;
    double maintenanceSurcharge;

public:
    Snowboard(double hr, double ms);
    double getHourlyRate();
    double getMaintenanceSurcharge();
    virtual double calculateRentalCost(int hours) const override;
};

















#endif