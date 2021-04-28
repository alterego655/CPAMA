/* Converts a Fahrenheit temperature to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) 
{
    float farenheit, celsius;

    printf("Enter Farenheit temperatures: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent is: %.lf\n", celsius);

    return 0;
}
