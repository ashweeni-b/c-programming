/*
Problem: Print multiplication table of 10 in reverse order
Concept: Loop control instructions and operators
Approach:
Initialize i to 1
Check condition i <= 10
Print the table, 10 * i = 10 * i
Increment the value of i
*/

#include <stdio.h>

int main() {
    // Print the multiplication table
    printf("Multiplication table of 10:\n");

    for(int i = 10; i > 0; i--) {
        printf("%d * %d = %d\n", 10, i, 10 * i);
    }

    return 0;
}