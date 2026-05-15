/*
Problem: Change the value of a variable to ten times 
of its current value
Concept: Pointers
Approach: Pass the variable using call by reference
and return the ten times of the value of variable
*/

int value_update(int* n);

#include <stdio.h>

int main() {
    int a = 8;

    printf("Updated value: %d", value_update(&a));

    return 0;
}

int value_update(int* n) {
    return 10 * *n;
}