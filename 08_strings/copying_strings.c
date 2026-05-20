/*
Problem: Copying strings
Concept: Strings and Loops
Approach:
Input original string and string to be copied
Store the string to be copied in the original string 
character by character
*/

#include <stdio.h>

void string_copy(char string1[], char string2[]);

int main() {
    char string1[100], string2[100];

    // Input two strings
    printf("Enter the original string: ");
    scanf("%[^\n]%*c", &string1);

    printf("Enter the string to be copied: ");
    scanf("%[^\n]%*c", &string2);

    printf("Original string is %s\n", string1);
    printf("String to be copied is %s\n", string2);

    string_copy(string1, string2);

    printf("Original string after copying is %s", string1);

    return 0;
}

void string_copy(char string1[], char string2[]) {
    for(int i = 0, j = 0; string2[j] != '\0'; i++) {
        string1[i] = string2[j];
        j++;

        if(string2[j] == '\0') {
            string1[i + 1] = '\0';
            break;
        }
    }
} 