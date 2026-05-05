/*
Program: Check whether a given number is prime or not
Concept: Loop control instructions, operators and mathematics
Approach:
Input number to be checked
Check for divisors between 1 to number
If divisors are there the number is not prime
Else number is priem
*/

#include <stdio.h>

int main() {
    int number, not_prime = 0;

    // Input number to be checked
    printf("Enter number: ");
    scanf("%d", &number);

    // Check prime or not
    for (int i = 2; i < number; i++) {
        if(number % i == 0) {
            not_prime++;
            break;
        }
    }
    
    // Print output
    if(number == 1) {
        printf("1 is neither prime nor composite");
    } else if(number == 2) {
        printf("2 is even prime number");
    } else if(not_prime) {
        printf("%d is not prime", number);
    } else {
        printf("%d is prime", number);
    }
    
    return 0;
}