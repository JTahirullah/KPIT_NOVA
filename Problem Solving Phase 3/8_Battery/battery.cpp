
#include "battery.h"
#include <iostream>

Battery::Battery(double cap, double chargeLvl, double volt, double temp)
    : capacity(cap), chargeLevel(chargeLvl), voltage(volt), temperature(temp) 
{
    parameters = {0.0, 0.0, temperature};
}

void Battery::charge(double amount) 
{
    chargeLevel += amount;
    if (chargeLevel > capacity) chargeLevel = capacity;
}

void Battery::discharge(double amount) 
{
    chargeLevel -= amount;
    if (chargeLevel < 0) chargeLevel = 0;
}

double Battery::getCapacity() const 
{
    return capacity;
}

double Battery::getChargeLevel() const 
{
    return chargeLevel;
}

double Battery::getVoltage() const 
{
    return voltage;

}

double Battery::getTemperature() const 
{
    return temperature;
}

double &Battery::operator[](int index) 
{
    return parameters.at(index);
}

Battery &Battery::operator*() 
{
    return *this;
}

Battery *Battery::operator->() 
{
    return this;
}

Battery &Battery::operator++() 
{
    chargeLevel += 1;
    if (chargeLevel > capacity) chargeLevel = capacity;
    return *this;
}

Battery &Battery::operator--() 
{
    chargeLevel -= 1;
    if (chargeLevel < 0) chargeLevel = 0;
    return *this;
}

Battery &Battery::operator=(const Battery &other) 
{
    if (this != &other) {
        capacity = other.capacity;
        chargeLevel = other.chargeLevel;
        voltage = other.voltage;
        temperature = other.temperature;
        parameters = other.parameters;
    }
    return *this;
}

std::istream &operator>>(std::istream &in, Battery &battery) 
{
    in >> battery.capacity >> battery.chargeLevel >> battery.voltage >> battery.temperature;
    battery.parameters[2] = battery.temperature;
    return in;
}

std::ostream &operator<<(std::ostream &out, const Battery &battery) 
{
    out << "Capacity: " << battery.capacity << ", Charge Level: " << battery.chargeLevel
        << ", Voltage: " << battery.voltage << ", Temperature: " << battery.temperature;
    return out;
}