/*
Problem: Sum of Digits of a Five Digit Number
Concept: Conditional and Loops
Platform: HackerRank
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int rem, sum = 0;
    
    while(n != 0) {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    
    printf("%d", sum);
    
    return 0;
}