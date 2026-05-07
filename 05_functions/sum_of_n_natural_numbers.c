/*
Problem: Sum of first n natural numbers
Concept: Recursion
Approach: 
sum(n) = n + sum(n - 1)
*/

#include <stdio.h>

int sum(int n);

int main() {
    int n;

    // Input number up to which sum is to be calculated
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is %d", n, sum(n));

    return 0;
}

int sum(int n) {
    if(n == 1)
        return 1;
    
    return n + sum(n - 1);
}