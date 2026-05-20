/*
Problem: Occurrence of character
Concept: Strings, Loops and Function
*/

#include <stdio.h>

int occurrence_of_character(char* string, char ch);

int main() {
    char string[100];
    char ch;

    // Input the string
    printf("Enter the string: ");
    scanf("%s", &string);

    // Input the character
    printf("Enter the character to be checked: ");
    scanf(" %c", &ch);

    printf("%c has occurred %d times in %s", ch, occurrence_of_character(string, ch), string);

    return 0;
}

int occurrence_of_character(char* string, char ch) {
    int count = 0;

    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == ch) {
            count++;
        }
    }

    return count;
}