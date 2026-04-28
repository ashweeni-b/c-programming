/*
Problem: Take an input from the user and print it
Concept: Input and Output
Approach: Use of library function - scanf() and printf()
*/

#include <stdio.h>

int main() {
    int a;

    // Take input from the user
    scanf("%d", &a);

    // Print the input to the user
    printf("The value of a is %d", a);

    return 0;
}