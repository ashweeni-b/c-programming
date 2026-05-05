/*
Program: Calculate the factorial of a number
Concept: Loop control instructions and operators
Approach:
Input number whose factorial is to be calculated
Initalize i to number and fact to 1
Check condition i >= 1
Update fact to fact * i
Decrement the value of i
Print factorial
*/

#include <stdio.h>

int main() {
    int number, fact = 1;

    // Input the number whose factorial is to be calculated
    printf("Enter the number: ");
    scanf("%d", &number);

    // Calculate the factorial
    for (int i = number; i >= 1; i--) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", number, fact);

    return 0;
}