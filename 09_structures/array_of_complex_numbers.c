/*
Problem: Array of complex numbers
Concept: Structures and Arrays
*/

#include <stdio.h>

struct complex_number {
    int i, j;
};

int main() {
    struct complex_number complex[5];

    printf("Enter real and imaginary values for:\n");

    for(int i = 0; i < 5; i++) {
        printf("Complex Number %d: ", i + 1);
        scanf("%d %d", &complex[i].i, &complex[i].j);
    }

    printf("\n\nComplex Numbers are:\n");

    for(int i = 0; i < 5; i++) {
        printf("Complex Number %d: %d + %d i\n", i + 1, complex[i].i, complex[i].j);
    }

    return 0;
}