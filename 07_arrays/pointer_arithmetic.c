/*
Problem: Demonstrate pointer arithmetic
Concept: Pointers
*/

#include <stdio.h>

int main() {
    // Integer pointer 1
    int a = 34;
    int* ptr1 = &a;

    // Integer pointer 2
    int b = 42;
    int* ptr2 = &b;

    // Displaying integer addresses
    printf("Pointer 1 address: %u\n", ptr1);

    // Addition of number to a pointer
    ptr1 += 3;
    printf("Adding 3 to Pointer 1 address: %u\n", ptr1);

    // Subtraction of number from a pointer
    ptr1 -=1;
    printf("Subtracting 1 from Pointer 1 address: %u\n", ptr1);

    // Displaying integer pointer address
    printf("Pointer 2 address: %u\n", ptr2);
    
    // Subtraction of integer pointer 2 from updated integer pointer 1
    printf("Pointer 1 address- Pointer 2 address: %u\n", ptr1 - ptr2);

    // Comparison of updated integer pointer 1 with integer pointer 2
    if (ptr1 >= ptr2) {
        printf("Pointer 1 address is greater\n");
    } else {
        printf("Pointer 2 address is greater\n");
    }

    return 0;

}