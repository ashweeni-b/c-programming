/*
Problem: Write a function for reversal of an array
Concept: Arrays and Functions
*/

#include <stdio.h>

int reverseArray(int* arr, int n);

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Initialize the array
    int array[size];

    // Input the array elements
    printf("Enter the array elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Print the arrray
    printf("The array is:\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }

    // Print the reverse the array
    printf("\nThe array in reverse is:\n");
    reverseArray(array, size);
    for(int i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }

    return 0;
}

int reverseArray(int* arr, int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = arr[n - i - 1];
        arr[n - i - 1] = arr[i];
        arr[i] = temp;
    }
}