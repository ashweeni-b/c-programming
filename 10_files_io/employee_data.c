/*
Problem: Take employee name and salary and store it in the 
following format
i. Name1, Salary1
ii. Name2, Salary2
Concept: File I/O
*/

#include <stdio.h>

struct employee_data {
    char name[20];
    float salary;
};

int main() {
    FILE* ptr;
    
    ptr = fopen("employee_data.txt", "a");

    struct employee_data emp1, emp2;

    printf("Enter name and salary for Employee 1: ");
    scanf("%s %f", &emp1.name, &emp1.salary);

    printf("Enter name and salary for Employee 2: ");
    scanf("%s %f", &emp2.name, &emp2.salary);

    fprintf(ptr, "i. %s, %.2f",emp1.name, emp1.salary);
    fprintf(ptr, "%s", "\n");
    fprintf(ptr, "ii. %s, %.2f", emp2.name, emp2.salary);

    fclose(ptr);

    return 0;
}