/*
Problem: 1D Arrays in C
Concept: Arrays and Strings
Platform: HackerRank
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int* arr;
    
    // Enter the value of n
    scanf("%d", &n);
    
    // Allocate memory to the array    
    arr = (int*) malloc(n * sizeof(int));
    
    // Input the array values
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("%d", sum);
    
    free(arr);
    
    return 0;
}
