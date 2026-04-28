/*
Problem: Calculate area of circle and modify the pogram to volume of cylinder
Concept: Basics of geometry
Approach: 
Using area of circle = pi * r * r and 
volume of cylinder = pi * r * r * h
*/

#include <stdio.h>

int main() {
    float radius, height;

    radius = 5.0;
    height = 8;

    // Area of circle
    float area = 3.14 * radius * radius;

    printf("Area of circle = %.2f\n", area);

    // Volume of cylinder
    float volume = area * height;

    printf("Volume of cylinder = %.2f", volume);

    return 0;
}