/*
Problem: Print the sum of first ten natural numbers
Concept: Loop control instruction and operators
Approach:
Initialize i to 1 and sum to 0
Check condition i <= 10
Update sum to sum + i
Increment the value of i
Print the value of sum
*/

#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    // Calculate the sum
    while(i <= 10) {
        sum = sum + i;
        i++;
    }

    // Print the value of sum
    printf("Sum of first 10 natural numbers is %d\n", sum);

    return 0;
}