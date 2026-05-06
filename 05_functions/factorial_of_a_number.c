/*
Problem: Factorial of a number
Concept: Recursion
Approach: 
fact(n) = n * fact(n - 1)
*/

#include <stdio.h>

int fact(int n);

int main() {
    int number;

    // Input number to calculate the factorial
    printf("Enter number: ");
    scanf("%d", &number);

    int factorial = fact(number);

    printf("Factorial of %d is %d", number, factorial);

    return 0;
}

int fact(int n) {
    if(n == 1) {
        return 1;
    }
    
    return n * fact(n - 1);
}