/*
Problem: Demonstration of structure to functions
Concept: Structures and Functions
*/

#include <stdio.h>
#include <string.h>

struct employee_data {
    int code;
    float salary;
    char name[20];
};

void show(struct employee_data emp);

int main() {
    struct employee_data e1;

    e1.code = 543;
    e1.salary = 50000.00;
    strcpy(e1.name, "Jane");

    printf("Employee 1 Details: \n");
    show(e1);

    return 0;
}

void show(struct employee_data emp) {
    printf("%d %.2f %s", emp.code, emp.salary, emp.name);
}