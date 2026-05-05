/*
Problem: Print first n natural numbers using do-while loop
Concept: Loop Control instructions and operators
Approach:
Input number up to which natural numbers need to be printed
Initalize i to 1
Print the value of i, increment the value of i
Check condition of i <= n
*/

#include <stdio.h>

int main() {
    int number;

    // Input the number upto which natural numbers should be printed
    printf("Enter number: ");
    scanf("%d", &number);
    
    int i = 1;

    printf("Natural numbers between %d and %d are:\n", i, number);

    do {
        printf("%d\t", i);
        i++;
    } while (i <= number);

    return 0;
}