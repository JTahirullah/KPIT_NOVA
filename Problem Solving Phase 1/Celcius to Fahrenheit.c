#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main() 
{
    float temp_in_celsius = 20.5;
    float temp_in_fahrenheit;

    temp_in_fahrenheit = celsius_to_fahrenheit(temp_in_celsius);
    printf("%f\n", temp_in_fahrenheit);

    return 0;
}

float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9/5) + 32;
}
