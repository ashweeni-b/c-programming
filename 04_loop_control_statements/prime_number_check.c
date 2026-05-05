/*
Program: Check whether a given number is prime or not
Concept: Loop control instructions, operators and mathematics
Approach:
Input number to be checked
Check for divisors between 1 to number
If divisors are there the number is not prime
Else number is prime
*/

#include <stdio.h>

int main() {
    int number;

    // Input number to be checked
    printf("Enter number: ");
    scanf("%d", &number);

    // Check prime or not using for loop
    int not_prime_for_loop = 0;

    for (int i = 2; i < number; i++) {
        if(number % i == 0) {
            not_prime_for_loop++;
            break;
        }
    }
    
    // Print output
    printf("Using for loop: \n");
    if(number == 1) {
        printf("1 is neither prime nor composite");
    } else if(number == 2) {
        printf("2 is even prime number");
    } else if(not_prime_for_loop) {
        printf("%d is not prime number", number);
    } else {
        printf("%d is prime number", number);
    }

    // Check prime or not using while loop
    int not_prime_while_loop = 0;
    int i = 2;

    while (i < number) {
        if(number % i == 0) {
            not_prime_while_loop++;
            break;
        }
        i++;
    }
    
    // Print output
    printf("\nUsing while loop: \n");
    if(number == 1) {
        printf("1 is neither prime nor composite");
    } else if(number == 2) {
        printf("2 is even prime number");
    } else if(not_prime_while_loop) {
        printf("%d is not prime number", number);
    } else {
        printf("%d is prime number", number);
    }

    // Check prime or not using do-while loop
    int not_prime_do_while_loop = 0;
    int j = 2;

    do {
        if(number % j == 0) {
            not_prime_do_while_loop++;
            break;
        }
        j++;
    } while(j < number);
    
    // Print output
    printf("\nUsing do-while loop: \n");
    if(number == 1) {
        printf("1 is neither prime nor composite");
    } else if(number == 2) {
        printf("2 is even prime number");
    } else if(not_prime_do_while_loop) {
        printf("%d is not prime number", number);
    } else {
        printf("%d is prime number", number);
    }
    
    return 0;
}