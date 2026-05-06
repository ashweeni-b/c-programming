/*
Problem: Force of Attraction
Concept: Functions
Approach:
Force = mass * g
*/

#include <stdio.h>

float force(float mass);

int main() {
    float mass;

    // Input the mass
    printf("Enter the mass: ");
    scanf("%f", &mass);

    printf("Force of attraction of mass %.2f is %.2f N", 
        mass, force(mass));

    return 0;
}

float force(float mass) {
    return mass * 9.8;
}