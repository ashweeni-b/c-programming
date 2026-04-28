/*
Problem: Area of rectangle
Concept: Basic geometry
Approach:
1. Using hardcoded inputs
1. Taking inputs from the user
*/

#include <stdio.h>

int main() {
    int length, breadth;

    // Approach 1: Using hardcoded values
    length = 5;
    breadth = 3;

    printf("Using hardcoded values:\n");

    // Printing output using variables
    float area = length * breadth;

    printf("Area of rectangle (with hardcoded input) = %.2f\n\n", area);

    printf("Using user input\n");

    // Approach 2: Taking inputs from user
    printf("Input length: ");
    scanf("%d", &length);

    printf("Input breadth: ");
    scanf("%d", &breadth);

    // Directly printing the output
    printf("Area of rectangle (with user input) = %d", length * breadth);

    return 0;
}