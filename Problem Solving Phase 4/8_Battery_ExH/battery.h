#ifndef BATTERY_H
#define BATTERY_H

#include <string>
#include <array>

class Battery 
{
private:
    double capacity;
    double chargeLevel;
    double voltage;
    double temperature;
    std::array<double, 3> parameters;

public:
    Battery(double capacity, double chargeLevel, double voltage, double temperature);

    void charge(double amount);
    void discharge(double amount);
    double getCapacity() const;
    double getChargeLevel() const;
    double getVoltage() const;
    double getTemperature() const;

    double &operator[](int index);
    Battery &operator*();
    Battery *operator->();
    Battery &operator++();
    Battery &operator--();
    Battery &operator=(const Battery &other);

    friend std::istream &operator>>(std::istream &in, Battery &battery);
    friend std::ostream &operator<<(std::ostream &out, const Battery &battery);
};

#endif