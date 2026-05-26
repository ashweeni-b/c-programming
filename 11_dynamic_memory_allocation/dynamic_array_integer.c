/*
Problem: Create dynamic array for 5 integers
Concept: Dynamic Memory ALlocation
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* arr;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    arr = (int*) calloc(n, sizeof(int));

    printf("Enter the values for array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}