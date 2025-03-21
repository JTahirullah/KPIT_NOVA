#include "vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(int id, string mk, string mdl) : vehicleId(id), make(mk), model(mdl) {}
Car::Car(int id, string mk, string mdl, string engine, double mlg, double prc)
    : Vehicle(id, mk, mdl), engineType(engine), mileage(mlg), price(prc) {}

void Car::displayDetails() const 
{
    cout << "Vehicle ID: " << vehicleId << endl
         << "Make: " << make << endl
         << "Model: " << model << endl
         << "Engine Type: " << engineType << endl
         << "Mileage: " << mileage << " kmpl" << endl
         << "Price: " << price << " INR" << endl;
}

double Car::getMileage() const { return mileage; }
double Car::getPrice() const { return price; }

Truck::Truck(int id, string mk, string mdl, double payload, double mlg, double prc)
    : Vehicle(id, mk, mdl), payloadCapacity(payload), mileage(mlg), price(prc) {}

void Truck::displayDetails() const {
    cout << "Vehicle ID: " << vehicleId << endl
         << "Make: " << make << endl
         << "Model: " << model << endl
         << "Payload Capacity: " << payloadCapacity << " tons" << endl
         << "Mileage: " << mileage << " kmpl" << endl
         << "Price: " << price << " INR" << endl;
}

double Truck::getMileage() const { return mileage; }
double Truck::getPrice() const { return price; }