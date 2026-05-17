/*
Problem: Create an array of 3x10 and 
store multiplication table of 2, 7 and 9 in it
Concept: Arrays
*/

#include <stdio.h>

int main() {
    int n;
    int arr[3][10];

    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            n = 2;
        } else if(i == 1) {
            n = 7;
        } else {
            n = 9;
        }

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