/*
Problem: Bitwise Operators
Concept: Operators
Platform: HackerRank
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k,
        int* max_and, int* max_or, int* max_xor) {
  int and, or, xor;
  
  *max_and = *max_or = *max_xor = 0;
  
  for(int i = 1; i <= n; i++) {
    for(int j = i + 1; j <= n; j++) {
        and = i & j;
        if(and > *max_and && and < k) {
            *max_and = and;
        }
        
        or = i | j;
        if(or > *max_or && or< k) {
            *max_or = or;      
        }
        
        xor = i ^ j;
        if(xor > *max_xor && xor < k) {
            *max_xor = xor;
        }
    }
  }
}

int main() {
    int n, k;
    int max_and, max_or, max_xor;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k, &max_and, &max_or, &max_xor);
    
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
    
    return 0;
}
