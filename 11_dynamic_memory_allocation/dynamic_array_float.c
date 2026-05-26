/*
Problem: Create dynamic array for 5 floats
Concept: Dynamic Memory Allocation
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float* arr;

    arr = (float*) malloc(5 * sizeof(float));

    printf("Enter the values for array: ");

    for(int i = 0; i < 5; i++) {
        scanf("%f", &arr[i]);
    }

    printf("The array is: ");

    for(int i = 0; i < 5; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}