#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "array.h"
using namespace std;

void inputArray(int* arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
        if (cin.fail()) {
            throw runtime_error("Invalid input for array element.");
        }
    }
}

void sortArray(int* arr, int size) 
{
    sort(arr, arr + size);
}

void printArray(int* arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
