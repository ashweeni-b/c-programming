/*
Problem: Take marks of five students and print them
Concept: Arrays and Loops
*/

#include <stdio.h>

int main() {
    int marks[5];

    // Taking marks as input
    printf("Enter the marks of students: \n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    // Displaying the marks as output
    printf("The marks of the students are: \n");

    for(int i = 0; i < 5; i++) {
        printf("%d\t", marks[i]);
    }

    return 0;
}