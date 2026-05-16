/*
Problem: Access arrays using pointers
Concept: Arrays and Pointer
Approach:
Assign index 0 address to pointer variable
and then increment the pointer variable by 1
Print the values using pointers
*/

#include <stdio.h>

int main() {
    // Declaration of the array
    int marks[] = {23, 53, 65, 76, 85};

    // Assigning index 0 address to pointer variable
    int* ptr = &marks[0];

    // Printing the array values
    for(int i = 0; i < 5; i++) {
        printf("Value at index %d is %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}