/*
Problem: nth element of Fibonacci series
Concept: Recursion
Approach:
fib(n) = fib(n - 1) + fib(n - 2)
*/

#include <stdio.h>

int fib(int position);

int main() {
    int position;

    // Input the nth position
    printf("Enter the nth position: ");
    scanf("%d", &position);

    printf("The %dth element of the Fibonacci series is %d",
        position, fib(position));

    return 0;
}

int fib(int position) {
    if(position == 1 || position == 0) {
        return 0;
    }
    
    if(position == 2) {
        return 1;
    }

    return fib(position - 1) + fib(position - 2);
}