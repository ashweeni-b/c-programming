// Problem: Celsuis to Fahrenheit Conversion

#include <stdio.h>

int main() {
    float celsius;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = 9.0 / 5 * celsius + 32.0;

    printf("%.2f in Fahrenheit is %.4f", celsius, fahrenheit);

    return 0;
}