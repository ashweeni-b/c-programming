/*
Problem: Create an array of 3x10 and 
store multiplication table of number input by the user
Concept: Arrays
*/

#include <stdio.h>

int main() {
    int n;
    int arr[3][10];

    for(int i = 0; i < 3; i++) {
        printf("Value for %dth row:\n", i + 1);
        printf("Enter the value of n: ");
        scanf("%d", &n);

        for(int j = 0; j < 10; j++) {
            arr[i][j] = n * (j + 1);
        }
    }

    printf("The array of size 3 x 10 is:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}