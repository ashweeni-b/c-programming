/*
Problem: Display greeting using functions
Concept: Functions
Approach:
Create three functions:
a) Good morning which prints Good Morning
b) Good afternoon which prints Good Afternoon
c) Good night which prints Good Night
*/

#include <stdio.h>

// Function prototype
void goodMorning();
void goodAfternoon();
void goodNight();

int main() {

    // Function call
    goodMorning();
    goodAfternoon();
    goodNight();

    return 0;
}

// Function definition
void goodMorning() {
    printf("Good Morning\n");
}

void goodAfternoon() {
    printf("Good Afternoon\n");
}

void goodNight() {
    printf("Good Night\n");
}