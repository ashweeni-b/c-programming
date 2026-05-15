/*
Problem: Print the address of the variable and 
use the same address to get the value of the variable
Approach: Pointers
*/

#include <stdio.h>

int main() {
    int a = 43;
    
    // Pointer declaration
    int* b = &a;

    // Printing address of variable
    printf("Address of a: %u\n", b);

    // Printing value of variable using address
    printf("Value of variable: %d\n", *b);

    return 0;
}