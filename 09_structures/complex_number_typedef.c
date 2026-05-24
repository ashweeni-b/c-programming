/*
Problem: Create a structure for complex number using typedef
Concept: Structures
*/

#include <stdio.h>

typedef struct complex_number {
    int i, j;
} complex;

int main() {
    complex c1;

    printf("Enter real and imaginary values: ");
    scanf("%d %d", &c1.i, &c1.j);

    printf("Complex number is %d + %d i", c1.i, c1.j);

    return 0;
}