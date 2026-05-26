/*
Problem: Demonstration of free function using malloc
Concept: Dynamic Memory Allocation
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;

    arr = (int*) malloc(4 * sizeof(int));

    printf("Enter values for array: ");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}