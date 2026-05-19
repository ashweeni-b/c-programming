/*
Problem: Create strings using double quotes
and print it using loop
Concept: Strings and Loop
*/

#include <stdio.h>

int main() {
    // Declaration of the string
    char string[15] = "Hello World";

    for(int i = 0; i < 15; i++) {
        printf("%c ", string[i]);
    }

    return 0;
}