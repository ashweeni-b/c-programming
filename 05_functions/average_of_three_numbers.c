/*
Problem: Average of three numbers
Concept: Functions
Approach:
average = (a + b + c) / 3
*/

#include <stdio.h>

float average(int a, int b, int c);

int main() {
    int num1, num2, num3;

    // Input the numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Average of %d, %d and %d is %.2f", 
        num1, num2, num3, average(num1, num2, num3));

    return 0;
}

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}