#include <iostream>
#include <cstring>
#include "chararray.h"
using namespace std;

void toUpperCase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; ++i) 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}
void removeVowels(char str[]) 
{
    int index = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
            str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') 
        {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

void reverseString(char str[]) 
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) 
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}