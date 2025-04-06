#include "route_planner.h"

int main() {
    Car car;
    Truck truck;
    Motorcycle motorcycle;

    RoutePlanner<Car> carPlanner(car, "Moderate", "Good", "City Driving");
    RoutePlanner<Truck> truckPlanner(truck, "Heavy", "Average", "Heavy Load");
    RoutePlanner<Motorcycle> motorcyclePlanner(motorcycle, "Light", "Excellent", "Agility");

    carPlanner.planRoute();
    truckPlanner.planRoute();
    motorcyclePlanner.planRoute();

    return 0;
}
