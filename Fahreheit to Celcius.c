#include <stdio.h>

float fahren_to_celcius(float fahren);

int main() 
{
    float temp_in_fahrenheit=98.3;
    float temp_in_celsius;

    temp_in_celsius = fahren_to_celcius(temp_in_fahrenheit);
    printf("%f\n", temp_in_celsius);

    return 0;
}

float fahren_to_celcius(float fahren)
{
    return (fahren-32) * 5/9;
}
