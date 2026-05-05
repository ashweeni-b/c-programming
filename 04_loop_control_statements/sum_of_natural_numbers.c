/*
Problem: Print the sum of first ten natural numbers
Concept: Loop control instruction and operators
Approach:
1. Using while loop
    Initialize i to 1 and sum to 0
    Check condition i <= 10
    Update sum to sum + i
    Increment the value of i
    Print the value of sum
2. Using for loop
    Initialize i to 1 and sum to 0
    Check condition i <= 10
    Update sum to sum + i
    Increment the value of i
    Print the value of sum
3. Using do-while loop
    Initialize i to 1 and sum to 0
    Update sum to sum + i
    Increment the value of i
    Check condition i <= 10
    Print the value of sum
*/

#include <stdio.h>

int main() {
    int i, sum;

    // Calculate the sum using while loop
    i = 1, sum = 0;
    while(i <= 10) {
        sum = sum + i;
        i++;
    }

    // Calculate the sum using for loop
    sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    // Calculate the sum using do-while loop
    i = 1; sum = 0;
    do {
        sum = sum + i;
        i++;
    } while (i <= 10);

    // Print the value of sum
    printf("Sum of first 10 natural numbers:\n");
    printf("Using while loop is %d\n", sum);
    printf("Using for loop is %d\n", sum);
    printf("Using do-while loop is %d", sum);

    return 0;
}