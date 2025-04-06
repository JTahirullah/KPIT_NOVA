#include "transport.h"
#include <iostream>

int main() {
    try {
        ElectricAutomobile eCar("Tesla", "Model S", 2022, "Sedan", 100.0, 80.0, 400);
        ElectricHeavyVehicle eTruck("Volvo", "FH Electric", 2021, 15.0, 200.0, 150.0, 10000);

        std::cout << "Electric Car Details:" << std::endl;
        eCar.displayDetails();
        eCar.displayElectricDetails();

        std::cout << "Electric Truck Details:" << std::endl;
        eTruck.displayDetails();
        eTruck.displayElectricDetails();
    }
    catch (const std::invalid_argument &e) {
        std::cerr << "Invalid argument error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
