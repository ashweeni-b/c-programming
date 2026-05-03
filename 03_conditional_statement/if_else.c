/*
Problem: Checking of age for voting
Concept: Conditional instructions
Approach: If age is 18 or above 18, then 
the user is eligible to vote, else not eligible
*/

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Eligible to vote");
    } else {
        printf("Not eligible to vote");
    }

    return 0;
}