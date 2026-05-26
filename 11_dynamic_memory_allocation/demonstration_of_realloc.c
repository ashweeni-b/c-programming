/*
Problem: Demonstration of realloc function
Concept: Dynamic Memory Allocation
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;

    arr = (int*) malloc(5 * sizeof(int));

    printf("Enter values for array: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    arr = (int*) realloc(arr, 10 * sizeof(int));

    printf("\nEnter values for array: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}