/*
Problem: Take a variable i, print its address, 
pass the variable to function and again print the address
and check whether the addresses are same or not
Concept: Functions and Pointers
*/

int print_address_call_by_value(int a);
int print_address_call_by_reference(int* b);

#include <stdio.h>

int main() {
    int i;

    // Print address of i
    printf("Address of i: %u\n", &i);

    // Print address using call by value
    printf("\nUsing call by value function call");
    print_address_call_by_value(i);

    // Print address using call by reference
    printf("\nUsing call by reference function call");
    print_address_call_by_reference(&i);

    return 0;
}

int print_address_call_by_value(int a) {
    printf("\nAddress of i: %u\n", &a);

    return 0;
}

int print_address_call_by_reference(int* b) {
    printf("\nAddress of i: %u", b);

    return 0;
}