/*
Problem: Print multiplication table of a given number n
Concept: Loop control instructions and operators
Approach:
Input number whose multiplication table needs to be printed
Initialize i to 1
Check condition i <= 10
Print the table, n * i = n * i
Increment the value of i
*/

#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", number);

    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}