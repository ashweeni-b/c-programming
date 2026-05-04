/*
Problem: Determine whether a year entered is leap year or not
Concept: Conditional statements and operators
Approach: If year is divisible by 4 and year is not divisible by 100 or
year is divisible by 400, then the year is a leap yer
*/

#include <stdio.h>

int main() {
    int year;

    // Input year from user
    printf("Enter year: ");
    scanf("%d", &year);

    // Check for the leap year
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d is a leap year", year);
    } else {
        printf("%d is not a leap year", year);
    }

    return 0;
}