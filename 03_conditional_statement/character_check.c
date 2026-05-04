/*
Problem: To check whether character entered is lowercase or not
Concept: Conditional statements and operators
Approach: If the entered character is between 'a'
and 'z', then it is lowercase, otherwise uppercase
*/

#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter the character: ");
    scanf("%c", &ch);

    // Check for lowercase character
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase character", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is uppercase character", ch);
    } else {
        printf("%c is non-alphabetic character", ch);
    }

    return 0;
}