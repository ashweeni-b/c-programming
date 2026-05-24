/*
Problem: Comparison of dates
Concept: Structures and Conditional Instructions
Approach: 
Comparion of years first, then of months and then of dates
*/

#include <stdio.h>

// Structure declaration for dates
struct dates {
    int date;   // Storing date
    int month;  // Storing month
    int year;   // Storing year
};

int main() {
    struct dates date1, date2;

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.date, &date1.month, &date1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.date, &date2.month, &date2.year);

    // Comparison of years
    if(date1.year > date2.year) {
        printf("%d %d %d is later", date1.date, date1.month, date1.year);
    } else if(date1.year < date2.year) {
        printf("%d %d %d is later", date2.date, date2.month, date2.year);
    } else {
        // Comparison of months when year is same
        if(date1.month > date2.month) {
            printf("%d %d %d is later", date1.date, date1.month, date1.year);
        } else if(date1.month < date2.month) {
            printf("%d %d %d is later", date2.date, date2.month, date2.year);
        } else {
            // Comparison of dates when year and months are same
            if(date1.date > date2.date) {
                printf("%d %d %d is later", date1.date, date1.month, date1.year);
            } else if(date1.date < date2.date) {
                printf("%d %d %d is later", date2.date, date2.month, date2.year);
            } else {
                printf("Both dates are equal");
            }
        }
    }

    return 0;
}