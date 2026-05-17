/*
Problem: Count the positive integers in an array
Concept: Arrays and Functions
*/

#include <stdio.h>

int count_positive(int* arr, int n);

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Initialize the array
    int arr[n];

    // Input the array elements
    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("The array is:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    // Count the positive integers
    printf("\nThere are %d positive integers in the array", count_positive(arr,n));

    return 0;
}

int count_positive(int* arr, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            count++;
        }
    }

    return count;
}