#include "fleet.h"
#include <iostream>
using namespace std;

int main() {
    Engine petrolEngine(PETROL, 1.5);
    Engine dieselEngine(DIESEL, 2.0);

    TouristVehicle tv1("Toyota", "HiAce", 2020, 30000, petrolEngine, 12, "Automatic");
    PrivateVehicle pv1("Honda", "Civic", 2022, 25000, dieselEngine, 4, "Manual");

    Vehicle* vehicles[] = {&tv1, &pv1};
    int size = sizeof(vehicles) / sizeof(vehicles[0]);

    printVehicleDetails(vehicles, size);
    cout << "Total Price: " << calculateTotalPrice(vehicles, size) << endl;

    return 0;
}