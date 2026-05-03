/*
Problem: Assign grade to students depending on the marks
Concept: Conditional Statement and Relational Operator
Approach: 
90 - 100 --> A
80 - 90 --> B
70 - 80 --> C
60 - 70 --> D
50 - 60 --> E
< 50 --> F
*/

#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Assign grades
    if(marks > 90 && marks <= 100) {
        printf("Grade: A");
    } else if (marks > 80 && marks <= 90) {
        printf("Grade: B");
    } else if (marks > 70 && marks <= 80) {
        printf("Grade: C");
    } else if (marks > 60 && marks <= 70) {
        printf("Grade: D");
    } else if (marks > 50 && marks <= 60) {
        printf("Grade: E");
    } else {
        printf("Grade: F");
    }

    return 0;
}