/*
Problem: Create an array of 10 numbers.
Verify the third element using pointer arithmetic
Concept: Arrays and Pointer Arithmetic
Approach:
Create an array of 10 numbers
Assign the array address to pointer variable
Print the third element of the array
Increment the pointer variable by 2
Print the value at incremented pointer variable
*/

#include <stdio.h>

int main() {
    // Initialization of the array
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Initialization of the pointer variable
    int* ptr = array;

    // Print the third element of the array
    printf("Third element of the array is %d\n", array[2]);

    // Increment the pointer variable
    ptr += 2;

    // Print the third element using pointer
    printf("Third element of the array using pointers is %d\n", *ptr);

    return 0;
}