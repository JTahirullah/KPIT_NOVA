#include <iostream>
#include <stdexcept>
#include "swap.h"
using namespace std;

int main() 
{
    try {
        int num1, num2;

        cout << "Enter the value of num1: ";
        cin >> num1;
        if (cin.fail()) throw invalid_argument("Invalid input for num1.");

        cout << "Enter the value of num2: ";
        cin >> num2;
        if (cin.fail()) throw invalid_argument("Invalid input for num2.");

        cout << "The numbers before swapping are:\nnum1 = " << num1 << " and num2 = " << num2 << endl;

        swap(num1, num2);

        cout << "The numbers after swapping are:\nnum1 = " << num1 << " and num2 = " << num2 << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
