#include "battery.h"
#include <iostream>

int main() 
{
    try {
        Battery battery1(100.0, 50.0, 12.0, 25.0);
        Battery battery2(120.0, 60.0, 15.0, 30.0);

        std::cout << battery1 << std::endl;

        ++battery1;
        std::cout << "After incrementing charge level: " << battery1 << std::endl;

        --battery1;
        std::cout << "After decrementing charge level: " << battery1 << std::endl;

        battery1.charge(20.0);
        std::cout << "After charging: " << battery1 << std::endl;

        battery1.discharge(30.0);
        std::cout << "After discharging: " << battery1 << std::endl;

        battery1[0] = 10.0;
        battery1[1] = 5.0;
        std::cout << "Modified charge and discharge rates: Charge Rate = " << battery1[0]
                  << ", Discharge Rate = " << battery1[1] << std::endl;

        std::cout << "Accessing members via -> operator: Capacity = " << battery1->getCapacity()
                  << ", Charge Level = " << battery1->getChargeLevel() << std::endl;

        battery2 = battery1;
        std::cout << "After assignment: " << battery2 << std::endl;

        std::cout << "Enter new battery details (capacity chargeLevel voltage temperature): ";
        std::cin >> battery1;
        std::cout << "Updated battery details: " << battery1 << std::endl;
    }
    catch (const std::invalid_argument &e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range &e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unknown error occurred." << std::endl;
    }

    return 0;
}
