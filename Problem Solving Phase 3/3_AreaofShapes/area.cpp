#include "area.h"

const double PI = 3.141592653589793;
double calculateArea(double radius) 
{
    return PI * radius * radius;
}
double calculateArea(double length, double width) 
{
    return length * width;
}
double calculateArea(double base, double height, bool isTriangle) 
{
    if (isTriangle) 
    {
        return 0.5 * base * height;
    }
    return 0; 
}