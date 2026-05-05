/*
Program: Calculate the factorial of a number
Concept: Loop control instructions and operators
Approach:
1. Using for loop
    Input number whose factorial is to be calculated
    Initalize i to number and fact to 1
    Check condition i >= 1
    Update fact to fact * i
    Decrement the value of i
    Print factorial
2. Using while loop
    Input number whose factorial is to be calculated
    Initalize i to number and fact to 1
    Check condition i >= 1
    Update fact to fact * i
    Decrement the value of i
    Print factorial
*/

#include <stdio.h>

int main() {
    int number;

    // Input the number whose factorial is to be calculated
    printf("Enter the number: ");
    scanf("%d", &number);

    // Calculate the factorial using for loop
    int fact_for_loop = 1;
    for (int i = number; i >= 1; i--) {
        fact_for_loop = fact_for_loop * i;
    }

    // Calculate the factorial using while loop
    int i = number, fact_while_loop = 1;
    while (i >= 1) {
        fact_while_loop = fact_while_loop * i;
        i--;
    }

    printf("Factorial of %d:\n", number);
    printf("Using for loop is %d\n", fact_for_loop);
    printf("Using while loop is %d\n", fact_while_loop);

    return 0;
}