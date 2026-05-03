/*
Problem: Determine whether a student is passed or failed.
The student has 3 subjects and to pass, a total of 40% and
more than 33% in each subject is required
Concept: Conditional Statement and Operators
Approach: 
Consider the out of marks in each subject is 100
If marks in subjects are greater than or equal to 33% (100 * (33/100))
and total marks is greater than or equal to 40% (3 * 100 * (40/100)),
the student is passed, otherwise failed
*/

#include <stdio.h>

int main() {
    int marks1, marks2, marks3;
    int total_marks;

    // Input marks from user
    printf("Enter subject 1 marks: ");
    scanf("%d", &marks1);

    printf("Enter subject 2 marks: ");
    scanf("%d", &marks2);

    printf("Enter subject 3 marks: ");
    scanf("%d", &marks3);

    // Calculate total marks
    total_marks = marks1 + marks2 + marks3;

    // Display marks and total
    printf("Subject 1 marks: %d\n", marks1);
    printf("Subject 2 marks: %d\n", marks2);
    printf("Subject 3 marks: %d\n", marks3);

    printf("Total marks: %d\n", total_marks);

    // Assign result
    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 
        && total_marks >= 120) {
            printf("Student passed");
    } else {
        printf("Student failed");
    }

    return 0;
}