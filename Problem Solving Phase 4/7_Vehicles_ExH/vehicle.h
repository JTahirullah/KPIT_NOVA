#include <iostream>
#include <algorithm>
#include <stdexcept>
#include "vehicle.h"
using namespace std;

void displayVehicleDetails(Vehicle* vehicles[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        vehicles[i]->displayDetails();
        cout << endl;
    }
}

double calculateTotalMileage(Vehicle* vehicles[], int size) 
{
    double totalMileage = 0.0;
    for (int i = 0; i < size; ++i) 
    {
        totalMileage += vehicles[i]->getMileage();
    }
    return totalMileage;
}

void sortVehiclesByPrice(Vehicle* vehicles[], int size) 
{
    sort(vehicles, vehicles + size, [](Vehicle* v1, Vehicle* v2) 
    {
        return v1->getPrice() > v2->getPrice();
    });
}

Vehicle* searchVehiclesByVehicleId(Vehicle* vehicles[], int size, int vehicleId) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (vehicles[i]->getMileage() == vehicleId)  
        {
            return vehicles[i];
        }
    }
    return nullptr;
}

int main() 
{
    try 
    {
        Car car1(12345, "Tesla", "Model 3", "Electric", 15.0, 5000000);
        Car car2(67890, "Ford", "Mustang", "Petrol", 12.0, 3000000);
        Truck truck1(11223, "Volvo", "FH", 20.0, 8.0, 7000000);
        Truck truck2(44556, "Tata", "Prima", 25.0, 10.0, 5000000);
        Truck truck3(77889, "Ashok Leyland", "Boss", 15.0, 9.0, 4000000);

        Vehicle* vehicles[] = {&car1, &car2, &truck1, &truck2, &truck3};
        int size = sizeof(vehicles) / sizeof(vehicles[0]);

        cout << "Displaying vehicle details:\n";
        displayVehicleDetails(vehicles, size);

        cout << "Total mileage of all vehicles: " << calculateTotalMileage(vehicles, size) << " kmpl" << endl;

        sortVehiclesByPrice(vehicles, size);
        cout << "Vehicles sorted by price:\n";
        displayVehicleDetails(vehicles, size);

        int searchId;
        cout << "Enter vehicle ID to search: ";
        cin >> searchId;

        Vehicle* found = searchVehiclesByVehicleId(vehicles, size, searchId);
        if (found) 
        {
            cout << "Vehicle found:\n";
            found->displayDetails();
        } 
        else 
        {
            cout << "Vehicle not found.\n";
        }
    } 
    catch (const exception& e) 
    {
        cerr << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}
