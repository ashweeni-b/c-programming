/*
Problem: Print the variable value using pointer to pointer
Concept: Pointers
*/

#include <stdio.h>

int main() {
    int i = 53;

    // Initalizing pointer to pointer
    int* j = &i;
    int** k = &j;
    
    printf("Value of i: %d\n", i);
    printf("Value of i using pointer: %u\n", *j);
    printf("Value of i using pointer to pointer: %u\n", **k);

    return 0;
}