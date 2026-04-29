/*
Problem: Convert temperature from Celsius to Fahrenheit
Approach: Using temperature conversion formula
*/

#include <stdio.h>

int main() {
    float celsius;

    printf("Input temperature (C): ");
    scanf("%f", &celsius);

    // Conversion of temperature
    float fahrenheit = (((9.0 / 5.0) * celsius) + 32.0);

    printf("%.2f in Celsius = %.2f in Fahrenheit", celsius, fahrenheit);

    return 0;
}