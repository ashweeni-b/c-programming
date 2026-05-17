/*
Problem: Create an array of 10 elements and
store the multiplication table of n in the array,
where n is taken as input from the user
Concept: Arrays
*/

#include <stdio.h>

int main() {
    int n;

    // Initialize the array
    int table_of_n[10];

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Store the multiplication table of n
    // as the elements of the array
    for(int i = 0; i < 10; i++) {
        table_of_n[i] = n * (i + 1);
    }

    // Print the array elements
    printf("The array is:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t", table_of_n[i]);
    }

    return 0;
}