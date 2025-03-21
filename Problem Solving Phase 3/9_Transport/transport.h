#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
using namespace std;

class Transport 
{
protected:
    string make;
    string model;
    int year;

public:
    Transport(const string &mk, const string &mdl, int yr);
    virtual void displayDetails() const = 0;
    virtual ~Transport() = default;
};

class Automobile : public Transport 
{
private:
    string carType;

public:
    Automobile(const string &mk, const string &mdl, int yr, const string &type);
    void displayDetails() const override;
};

class HeavyVehicle : public Transport 
{
private:
    double payloadCapacity;

public:
    HeavyVehicle(const string &mk, const string &mdl, int yr, double capacity);
    void displayDetails() const override;
};

class Electric 
{
protected:
    double batteryCapacity;
    double chargeLevel;

public:
    Electric(double capacity, double charge);
    virtual void displayElectricDetails() const = 0;
    virtual ~Electric() = default;
};

class ElectricAutomobile : public Automobile, public Electric 
{
private:
    int range;

public:
    ElectricAutomobile(const string &mk, const string &mdl, int yr, const string &type, double capacity, double charge, int rng);
    void displayDetails() const override;
    void displayElectricDetails() const override;
};

class ElectricHeavyVehicle : public HeavyVehicle, public Electric 
{
private:
    int towingCapacity;

public:
    ElectricHeavyVehicle(const string &mk, const string &mdl, int yr, double payload, double capacity, double charge, int towing);
    void displayDetails() const override;
    void displayElectricDetails() const override;
};

#endif