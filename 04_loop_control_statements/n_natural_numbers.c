/*
Problem: Print first n natural numbers
Concept: Loop Control instructions and operators
Approach:
1. Using do-while loop
    Input number up to which natural numbers need to be printed
    Initalize i to 1
    Print the value of i, increment the value of i
    Check condition of i <= n
2. Using for loop
    Input number up to which natural numbers need to be printed
    Initialize i to 1
    Check condition of i <= n
    Print the value of i, increment the value of i
*/

#include <stdio.h>

int main() {
    int number;

    // Input the number upto which natural numbers should be printed
    printf("Enter number: ");
    scanf("%d", &number);
    
    int i = 1;

    printf("Natural numbers from %d to %d are:\n", i, number);

    printf("Using do-while loop:\n");
    do {
        printf("%d\t", i);
        i++;
    } while (i <= number);

    printf("\nUsing for loop:\n");
    for(int i = 1; i <= number; i++) {
        printf("%d\t", i);
    }

    return 0;
}