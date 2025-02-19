#include <stdio.h>
float BMI_Calc(float,float);
int main() {
    float height = 1.82;
    float weight = 72;
    float BMI=BMI_Calc(height,weight);
    printf("%f",BMI);
    return 0;
}
float BMI_Calc(float height,float weight)
{
    return (weight/(height*height));
}
