/*
Problem: Create vector using structures
Concept: Structures and Vectors
Approach: 
Vectors = (i, j)
Create structure using two variables demonstrating i and j
Create variable and assign value and print them
*/

#include <stdio.h>

struct vector {
    int i, j;
};

int main() {
    struct vector v1;

    v1.i = v1.j = 5;

    printf("Vector v1 = %d i + %d j", v1.i, v1.j);

    return 0;
}