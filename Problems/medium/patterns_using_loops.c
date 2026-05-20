/*
Problem: Printing Patterns Using Loops
Concept: Patterns
Platform: HackerRank
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min_of_two(int a, int b);
int min_of_four(int a, int b, int c, int d);

int main() 
{

    int n;
    scanf("%d", &n);
  	
    for(int i = 0; i < (2 * n) - 1; i++) {
        for(int j = 0; j < (2 * n) - 1; j++) {
            printf("%d ", 
                n - min_of_four(i, j, ((2 * n) - 1) - i - 1, 
                            ((2 * n) - 1) - j - 1) );
        }
        printf("\n");
    }
    return 0;
}

int min_of_two(int a, int b) {
    int minimum;
    if(a < b) {
        minimum = a;
    } else {
        minimum = b;
    }

    return minimum;
}

int min_of_four(int a, int b, int c, int d) {
    int min1 = min_of_two(a, b);
    int min2 = min_of_two(c, d);
    int min = min_of_two(min1, min2);
    
    return min;
}