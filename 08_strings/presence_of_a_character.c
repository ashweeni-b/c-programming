/*
Problem: Presence of character
Concept: Strings, Loops and Function
*/

#include <stdio.h>

void presence_of_character(char* string, char ch);

int main() {
    char string[100];
    char ch;

    // Input the string
    printf("Enter the string: ");
    scanf("%s", &string);

    // Input the character
    printf("Enter the character to be checked: ");
    scanf(" %c", &ch);

    presence_of_character(string, ch);

    return 0;
}

void presence_of_character(char* string, char ch) {
    int count = 0;
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == ch) {
            count++;
        }
    }

    if(count == 0) {
        printf("Character %c is not present", ch);
    } else {
        printf("Character %c is present", ch);
    }
}