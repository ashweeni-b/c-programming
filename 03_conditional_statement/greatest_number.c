/*
Problem: Find greatest of four numbers
Concept: Conditional statements and operators
Approach: 
If num1 is greater than num2, num3 and num4, num1 is greater,
if num2 is greater than num1, num3 and num4, num2 is greater,
if num3 is greater than num1, num2 and num4, num3 is greater and
if num4 is greater than num1, num2 and num3, num4 is greater
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // Input numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Check for greatest among four numbers
    if (num1 > num2 && num1 > num3 && num1 > num4) {
        printf("%d is greater", num1);
    } else if (num2 > num1 && num2 > num3 && num2 > num4) {
        printf("%d is greater", num2);
    } else if (num3 > num1 && num3 > num2 && num3 > num4) {
        printf("%d is greater", num3);
    } else {
        printf("%d is greater", num4);
    }

    return 0;
}