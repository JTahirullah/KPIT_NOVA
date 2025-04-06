#include "battery.h"
#include <iostream>
#include <stdexcept>  // for exceptions

Battery::Battery(double cap, double chargeLvl, double volt, double temp)
    : capacity(cap), chargeLevel(chargeLvl), voltage(volt), temperature(temp) 
{
    if (cap <= 0 || chargeLvl < 0 || volt < 0) {
        throw std::invalid_argument("Invalid battery parameters.");
    }
    if (chargeLevel > capacity)
        chargeLevel = capacity;

    parameters = {0.0, 0.0, temperature};
}

void Battery::charge(double amount) 
{
    if (amount < 0) throw std::invalid_argument("Charge amount cannot be negative.");
    chargeLevel += amount;
    if (chargeLevel > capacity) chargeLevel = capacity;
}

void Battery::discharge(double amount) 
{
    if (amount < 0) throw std::invalid_argument("Discharge amount cannot be negative.");
    chargeLevel -= amount;
    if (chargeLevel < 0) chargeLevel = 0;
}

double &Battery::operator[](int index) 
{
    if (index < 0 || index >= static_cast<int>(parameters.size())) {
        throw std::out_of_range("Invalid index for battery parameters.");
    }
    return parameters[index];
}

std::istream &operator>>(std::istream &in, Battery &battery) 
{
    in >> battery.capacity >> battery.chargeLevel >> battery.voltage >> battery.temperature;
    if (!in || battery.capacity <= 0 || battery.chargeLevel < 0 || battery.voltage < 0) {
        throw std::runtime_error("Invalid input for Battery.");
    }
    if (battery.chargeLevel > battery.capacity) battery.chargeLevel = battery.capacity;
    battery.parameters[2] = battery.temperature;
    return in;
}
