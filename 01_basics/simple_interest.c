/*
Problem: Calculate simple interest
Concept: Mathematics
Approach: Calculate simple interest with the formula:
Simple Interest = N * P * R
*/

#include <stdio.h>

int main() {
    int principal, years;
    float rate;

    // Taking user inputs
    printf("Input principal: ");
    scanf("%d", &principal);

    printf("Input rate of interest: ");
    scanf("%f", &rate);

    printf("Input time period: ");
    scanf("%d", &years);

    // Calculate simple interest
    float simple_interest = (principal * rate * years) / 100.00;

    printf("Simple interest for %d amount for %d years with %.2f rate of interest is %.2f", principal, years, rate, simple_interest);

    return 0;
}