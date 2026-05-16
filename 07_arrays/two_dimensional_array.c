/*
Problem: Input a 2D array and print it using function
Concept: Arrays, Pointers and Functions
Approach:
Create a 2D array
Input rows and columns value from user
Input the array from the user
Pass the array, rows value and column value to the function
Print the array using function
*/

#include <stdio.h>

void printArray(int arr[][2], int m);

int main() {
    // Declare the array
    int array[3][2];

    // Input the array 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Value at [%d][%d] is ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    // Display the array
    printf("The array entered is: \n");
    printArray(array, 3);

    return 0;
}

void printArray(int arr[][2], int m) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}