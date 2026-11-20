/*
Problem: Divisible by 97
Approach: 
If output 1 ---> Divisible by 97
If output 0 ---> Not divisible by 97
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Output: %d", number % 97 == 0);

    return 0;
}