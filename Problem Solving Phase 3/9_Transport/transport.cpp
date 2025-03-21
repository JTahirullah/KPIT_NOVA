#include "transport.h"
#include <iostream>
using namespace std;

Transport::Transport(const string &mk, const string &mdl, int yr) : make(mk), model(mdl), year(yr) {}

Automobile::Automobile(const string &mk, const string &mdl, int yr, const string &type)
    : Transport(mk, mdl, yr), carType(type) {}

void Automobile::displayDetails() const 
{
    cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year << ", Type: " << carType << endl;
}

HeavyVehicle::HeavyVehicle(const string &mk, const string &mdl, int yr, double capacity)
    : Transport(mk, mdl, yr), payloadCapacity(capacity) {}

void HeavyVehicle::displayDetails() const {
    cout << "Truck Make: " << make << ", Model: " << model << ", Year: " << year << ", Payload Capacity: " << payloadCapacity << " tons" << endl;
}

Electric::Electric(double capacity, double charge) : batteryCapacity(capacity), chargeLevel(charge) {}

ElectricAutomobile::ElectricAutomobile(const string &mk, const string &mdl, int yr, const string &type, double capacity, double charge, int rng)
    : Automobile(mk, mdl, yr, type), Electric(capacity, charge), range(rng) {}

void ElectricAutomobile::displayDetails() const 
{
    Automobile::displayDetails();
    cout << "Range: " << range << " km" << endl;
}

void ElectricAutomobile::displayElectricDetails() const {
    cout << "Battery Capacity: " << batteryCapacity << " kWh, Charge Level: " << chargeLevel << "%" << endl;
}

ElectricHeavyVehicle::ElectricHeavyVehicle(const string &mk, const string &mdl, int yr, double payload, double capacity, double charge, int towing)
    : HeavyVehicle(mk, mdl, yr, payload), Electric(capacity, charge), towingCapacity(towing) {}

void ElectricHeavyVehicle::displayDetails() const {
    HeavyVehicle::displayDetails();
    cout << "Towing Capacity: " << towingCapacity << " kg" << endl;
}

void ElectricHeavyVehicle::displayElectricDetails() const {
    cout << "Battery Capacity: " << batteryCapacity << " kWh, Charge Level: " << chargeLevel << "%" << endl;
}