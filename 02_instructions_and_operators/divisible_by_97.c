/*
Problem: Check whether a number is divisible by 97 or not
Concept: Divisibility check
Approach: If remainder of division of number and 97 is zero,
then the number is divisible by 97
*/

#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter number: ");
    scanf("%d", &num);

    // Check divisibility by 97
    printf("Divisibility: %d", num % 97);

    // If output of num % 97 is,
    // 0 then num is divisible by 97 and
    // other than 0 then num is not divisible by 97

    return 0;
}