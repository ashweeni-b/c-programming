/*
Problem: Print natural numbers between 10 to 20
when loop counter is initialzied to 0
Concept: Loop Control Instructions and operators
Approach: 
Initialize i to 0
Until i <= 20, if i >= 10, print i
*/

#include <stdio.h>

int main() {
    int i = 0;
    
    printf("The natural numbers from 10 to 20 are: \n");

    // Printing natural numbers from 10 and 20
    while (i <= 20) {
        if (i >= 10) {
            printf("%d\t", i);
        }
        i++;
    }

    return 0;
}