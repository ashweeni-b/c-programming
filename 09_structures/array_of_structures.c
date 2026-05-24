/*
Problem: Demonstration of array of structures
Concept: Structures and Arrays
*/

#include <stdio.h>
#include <string.h>

// Structure declaration
struct employee_data {
    int code;
    float salary;
    char name[20];
};

int main() {
    // Array of structures
    struct employee_data emp[5];

    // Storing data of employees
    emp[0].code = 342;
    emp[0].salary = 50000.00;
    strcpy(emp[0].name, "Jacob");

    emp[1].code = 422;
    emp[1].salary = 60000.00;
    strcpy(emp[1].name, "Jaden");

    // Accessing employee details
    printf("Employee 1 Details: \n");
    printf("%d %.2f %s", emp[0].code, emp[0].salary, emp[0].name);

    printf("\nEmployee 2 Details: \n");
    printf("%d %.2f %s", emp[1].code, emp[1].salary, emp[1].name);

    return 0;
}    
