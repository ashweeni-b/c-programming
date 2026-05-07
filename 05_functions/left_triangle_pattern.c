/*
Problem: Left triangle pattern
Concept: Patterns and Functions
Approach:
Pattern: n * 2n - 1
Printing pattern from 1 to n in rows
Printing * from i to 2n - 1 in columns
*/

#include <stdio.h>

void left_triangle_pattern(int n);

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    left_triangle_pattern(n);

    return 0;
}

void left_triangle_pattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}