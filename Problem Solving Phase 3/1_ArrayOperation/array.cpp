#include <iostream>
#include <algorithm>
#include "array.h"
using namespace std;

void inputArray(int* arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
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