#include <iostream>
#include "swap.h"
using namespace std;

int main() 
{
    int num1, num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;
    cout << "The numbers before swapping are:\nnum1 = " << num1 << " and num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "The numbers after swapping are:\nnum1 = " << num1 << " and num2 = " << num2 << endl;
    return 0;
}