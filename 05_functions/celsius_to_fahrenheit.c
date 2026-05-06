/*
Problem: Celsius to Fahrenheit temperature conversion
Concept: Functions
Approach:
Fahrenheit = (9 / 5) * Celsius + 32
*/

#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main() {
    float celsius;

    // Input Celsius temperature
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("%.2f Celsius = %.2f Fahrenheit", 
        celsius, celsius_to_fahrenheit(celsius));

    return 0;
}

float celsius_to_fahrenheit(float celsius) {
    return (9.0 / 5) * celsius + 32.0;
}