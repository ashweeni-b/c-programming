// Problem: Simple Interest

#include <stdio.h>

int main() {
    float principal, years, rate;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time period: ");
    scanf("%f", &years);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    float interest = principal * years * rate / 100;

    printf("Simple Interest is %.4f", interest);

    return 0;
}