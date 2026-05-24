/*
Problem: Complex Number
Concept: Structures
*/

#include <stdio.h>

struct complex_number {
    int i, j;
};

int main() {
    struct complex_number c1;

    printf("Enter the real and imaginary part of complex number: ");
    scanf("%d %d", &c1.i, &c1.j);

    printf("Complex number is %d + %d i", c1.i, c1.j);

    return 0;
}