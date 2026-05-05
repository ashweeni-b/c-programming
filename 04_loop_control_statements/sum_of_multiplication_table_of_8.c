/*
Program: Print the sum of multiplication table of 8
Concept: Loop control instructions and operators
Approach:
Initalize i to 1 and sum to 0
Check condition i <= 10
Update sum to sum + 8 * i
Increment the value of i
Print the sum
*/

#include <stdio.h>

int main() {
    int sum = 0;

    // Calculate the sum
    for (int i =1; i <= 10; i++) {
        sum = sum + (8 * i);
    }

    printf("Sum of multiplication table of 8 is %d", sum);

    return 0;
}