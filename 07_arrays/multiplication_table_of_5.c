/*
Problem: Create an array of 10 elements and
store the multiplication table of 5 in the array
Concept: Arrays
*/

#include <stdio.h>

int main() {
    // Initialize the array
    int table_of_5[10];

    // Store the multiplication table of 5
    // as the elements of the array
    for(int i = 0; i < 10; i++) {
        table_of_5[i] = 5 * (i + 1);
    }

    // Print the array elements
    printf("The array is:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t", table_of_5[i]);
    }

    return 0;
}