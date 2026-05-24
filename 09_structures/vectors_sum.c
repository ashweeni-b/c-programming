/*
Problem: Sum of Vectors
Concept: Structure, Function and Vectors
Approach:
Create a structure named vector
Create two vectors
Pass the vectors to the function sum of vectors
*/

#include <stdio.h>

// Declaration of vector
struct vector {
    int i, j;
};

// Declaration of function
int sumVector(struct vector v1, struct vector v2);

int main() {
    struct vector vector1, vector2;

    printf("Enter vector 1 values of i and j: ");
    scanf("%d %d", &vector1.i, &vector1.j);

    printf("Enter vector 2 values of i and j: ");
    scanf("%d %d", &vector2.i, &vector2.j);

    sumVector(vector1, vector2);

    return 0;
}

int sumVector(struct vector v1, struct vector v2) {
    int i = v1.i + v2.i;
    int j = v1.j + v2.j;

    printf("Sum of vector 1 and vector 2 is %d i + %d j", i, j);
}