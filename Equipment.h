#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <string>
#include <vector>
#include <iostream>
#include "SkiEquipment.h"

using namespace std;

class Equipment {
    private: 
        string ID;
        string brand;
    public:
    //constructor 
    Equipment();
    Equipment(string e, string b) : ID(e), brand(b) {}

    void displayDetails() const;
    virtual double calculateRentalCost(int hours) const;

    string getBrand() const { return brand; }
    void setBrand(string b) { brand = b; }
    string getID() const { return ID; }
















    //constructor
    Equipment();
    Equipment(string id) : ID(id) {}
        string getID() const { return ID; }





















};
#endif // EQUIPMENT_H