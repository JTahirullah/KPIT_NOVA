#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements:" << endl;
    inputArray(arr, size);
    sortArray(arr, size);
    cout << "The sorted array is:" << endl;
    printArray(arr, size);
    delete[] arr;
    return 0;
}