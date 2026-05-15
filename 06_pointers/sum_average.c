/*
Problem: Calculate sum and average of two numbers
Concept: Pointers and Functions
*/

int sum(int* a, int* b);
float average(int* a, int* b);

#include <stdio.h>

int main() {
    int x, y;

    // Input two values
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum and average are: %d and %.2f", sum(&x, &y), average(&x, &y));

    return 0;
}

int sum(int* a, int* b) {
    return *a + *b;
}

float average(int* a, int* b) {
    return (*a + *b) / 2.0;
}