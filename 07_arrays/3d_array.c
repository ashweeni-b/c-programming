/*
Problem: Create a 3-D array and print
the address in an increasing order
Concept: Arrays and Pointers
*/

#include <stdio.h>

int main() {
    int array[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    printf("The memory addresses are:\n");
    // Depth of the 3-D array
    for(int i = 0; i < 2; i++) {
        printf("LAYER %d\n", i + 1);
        // Row of the 3-D array
        for(int j = 0; j < 2; j++) {
            // Column of the 3-D array
            for(int k = 0; k < 3; k++) {
                // Print the address of the value
                printf("Address of arr[%d][%d][%d] is %u\n", i, j, k, &array[i][j][k]);
            }
            printf("\n");
        }
    }
}