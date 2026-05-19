/*
Problem: Calculate the length of the string
Concept: Strings and Loops
Approach:
Input the string from user
Count characters of the string until
a null character is not encounterd
*/

#include <stdio.h>

int length_of_string(char* string);

int main() {
    char string[100];

    // Input the string
    printf("Enter the string: ");
    scanf("%[^\n]%*c", &string);

    // Output the string length
    printf("Length of %s is %d\n", string, length_of_string(string));

    return 0;
}

int length_of_string(char* string) {
    int count = 0;

    for(int i = 0; ; i++) {
        if(string[i] != '\0') {
            printf("%c\t", string[i]);
            count++;
            printf("%d\n", count);
        } else {
            break;
        }
    }

    return count;
}