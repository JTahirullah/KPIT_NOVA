
#include "transport.h"
#include <iostream>
using namespace std;

int main() {
    ElectricAutomobile eCar("Tesla", "Model S", 2022, "Sedan", 100.0, 80.0, 400);
    ElectricHeavyVehicle eTruck("Volvo", "FH Electric", 2021, 15.0, 200.0, 150.0, 10000);

    cout << "Electric Car Details:" << endl;
    eCar.displayDetails();
    eCar.displayElectricDetails();

    cout << "Electric Truck Details:" << endl;
    eTruck.displayDetails();
    eTruck.displayElectricDetails();

    return 0;
}