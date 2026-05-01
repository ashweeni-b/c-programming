/*
Problem: Sum of three numbers
Concept: Basic Arithmetic operation
Approach:
1. Using hard-coded values
1. Taking inputs from the user 
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Hard-coded values
    num1 = 5;
    num2 = 9;
    num3 = 7;

    int sum = num1 + num2 + num3;

    printf("Sum of %d, %d and %d (using hard-coded inputs) = %d\n", num1, num2, num3, sum);

    // Taking user input
    printf("Enter numbers num1, num2 and num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("Sum of %d, %d and %d (using user inputs) = %d\n", num1, num2, num3, sum);

    return 0;
}