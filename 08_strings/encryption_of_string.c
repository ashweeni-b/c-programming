/*
Problem: Encryption of String by 1
Concept: Strings, Loops and Functions
Approach:
Point a character pointer to the string
Add 1 to each character to encrypt it
*/

#include <stdio.h>

void encryption(char* string);

int main() {
    char string[100];

    // Input the string
    printf("Enter the string: ");
    scanf("%s", &string);

    printf("Original string: %s\n", string);
    
    // Encrypt the string
    encryption(string);
    printf("Encrypted string: %s", string);

    return 0;
}

void encryption(char* string) {
    char* string_ptr = string;
    for(int i = 0; string[i] != '\0'; i++) {
        string_ptr[i] = string_ptr[i] + 1;
    }
}