#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle 
{
protected:
    int vehicleId;
    string make;
    string model;

public:
    Vehicle(int id, string mk, string mdl);
    virtual void displayDetails() const = 0;
    virtual double getMileage() const = 0;
    virtual double getPrice() const = 0;
    virtual ~Vehicle() = default;
};

class Car : public Vehicle 
{
private:
    string engineType;
    double mileage;
    double price;

public:
    Car(int id, string mk, string mdl, string engine, double mlg, double prc);
    void displayDetails() const override;
    double getMileage() const override;
    double getPrice() const override;
};

class Truck : public Vehicle 
{
private:
    double payloadCapacity;
    double mileage;
    double price;

public:
    Truck(int id, string mk, string mdl, double payload, double mlg, double prc);
    void displayDetails() const override;
    double getMileage() const override;
    double getPrice() const override;
};

#endif