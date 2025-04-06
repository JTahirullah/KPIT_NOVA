#ifndef ROUTE_PLANNER_H
#define ROUTE_PLANNER_H

#include <iostream>
#include <string>
using namespace std;

// Vehicle Classes 

class Car {
public:
    string getType() const {
        return "Car";
    }
};

class Truck {
public:
    string getType() const {
        return "Truck";
    }
};

class Motorcycle {
public:
    string getType() const {
        return "Motorcycle";
    }
};

//  Route Planner 

template <typename VehicleType>
class RoutePlanner {
private:
    VehicleType vehicle;
    string trafficPattern;
    string roadCondition;
    string vehicleCapability;

public:
    RoutePlanner(const VehicleType& v, const string& traffic, const string& road, const string& capability)
        : vehicle(v), trafficPattern(traffic), roadCondition(road), vehicleCapability(capability) {}

    void planRoute() const {
        cout << "Planning route for " << vehicle.getType() << " considering:\n";
        cout << "- Traffic Pattern: " << trafficPattern << "\n";
        cout << "- Road Condition: " << roadCondition << "\n";
        cout << "- Vehicle Capability: " << vehicleCapability << "\n";
        cout << "Route planned successfully!\n\n";
    }
};

#endif
