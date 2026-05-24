/*
Problem: Demonstration of Pointers to Structures
Concept: Structures and Pointers
*/

#include <stdio.h>
#include <string.h>

struct employee_data {
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee_data emp1;

    // Declaration of pointer
    struct employee_data *ptr;
    ptr = &emp1;

    // Storing values in structure
    ptr -> code = 432;
    ptr -> salary = 40000.00;
    strcpy(ptr -> name, "Jacob");

    // Accessing values from structure
    printf("Employee 1 Details: \n");
    printf("%d %.2f %s", ptr -> code, ptr -> salary, ptr -> name);

    return 0;
}