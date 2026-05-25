/*
Problem: Comparison of times input by the user
Concept: Structures, Functions, Arrays and Pointers
Approach:
Create time structure using typedef
Create comparison function
Enter the time from users using pointers
Pass the times to the comparison function
Compare hours first, then minutes and then seconds
*/

#include <stdio.h>

typedef struct time{
    int hours, minutes, seconds;
} T;

void comparison_of_times(T t1, T t2);

int main() {
    T time1, time2;

    T* time1_ptr;
    T* time2_ptr;

    time1_ptr = &time1;
    time2_ptr = &time2;

    printf("Enter first time (HH MM SS) in 24-hour format: ");
    scanf("%d %d %d", &time1_ptr -> hours, 
        &time1_ptr -> minutes, &time1_ptr -> seconds);

    printf("Enter second time (HH MM SS) in 24-hour format: ");
    scanf("%d %d %d", &time2_ptr -> hours, 
        &time2_ptr -> minutes, &time2_ptr -> seconds);

    comparison_of_times(time1, time2);

    return 0;
}

void comparison_of_times(T t1, T t2) {
    // Comparison of hours
    if(t1.hours > t2.hours) {
        printf("%d %d %d is later", t1.hours, t1.minutes, t1.seconds);
    } else if(t1.hours < t2.hours) {
        printf("%d %d %d is later", t2.hours, t2.minutes, t2.seconds);
    } else {
        // Comparison of minutes if hours are equal
        if(t1.minutes > t2.minutes) {
            printf ("%d %d %d is later", t1.hours, t1.minutes, t1.seconds);
        } else if(t1.minutes < t2.minutes) {
            printf("%d %d %d is later", t2.hours, t2.minutes, t2.seconds);
        } else {
            // Comaprison of seconds if hours and minutes are equal
            if(t1.seconds > t2.seconds) {
                printf("%d %d %d is later", t1.hours, t1.minutes, t1.seconds);
            } else if(t1.seconds < t2.seconds) {
                printf("%d %d %d is later", t2.hours, t2.minutes, t2.seconds);
            } else {
                printf("Both times are equal");
            }
        }
    }
}