#include <iostream>
#include "chararray.h"
using namespace std;
int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    toUpperCase(str);
    removeVowels(str);
    reverseString(str);
    cout << "The modified string is: " << str << endl;
    return 0;
}