#include <iostream>
#include "ev.h"
using namespace std;
ElectricVehicle::ElectricVehicle(int id, string mk, string mdl, double capacity, double level)
    : vehicleId(id), make(mk), model(mdl), batteryCapacity(capacity), chargeLevel(level) {}
void ElectricVehicle::charge(double hours) 
{
    double chargePerHour = batteryCapacity / 5.0; 
    chargeLevel += chargePerHour * hours;
    if (chargeLevel > batteryCapacity) 
    {
        chargeLevel = batteryCapacity;
    }
}

void ElectricVehicle::drive(double miles) 
{
    double consumptionPerMile = batteryCapacity / 300.0; 
    double requiredCharge = consumptionPerMile * miles;
    if (requiredCharge <= chargeLevel) 
    {
        chargeLevel -= requiredCharge;
    } else {
        cout << "Not enough charge to drive " << miles << " miles." << endl;
    }
}
void ElectricVehicle::displayVehicleDetails() 
{
    cout << "Vehicle ID: " << vehicleId << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    cout << "Charge Level: " << chargeLevel << " kWh" << endl;
    cout << endl;
}