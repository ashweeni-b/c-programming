/*
Problem: Store 3 employees details from user defined data
Concept: Structures
*/

#include <stdio.h>

struct employee_data
{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee_data emp1, emp2, emp3;

    printf("Enter employee 1 data:\n");
    
    printf("Code: ");
    scanf("%d", &emp1.code);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    printf("Name: ");
    scanf("%s", &emp1.name);

    
    printf("Enter employee 2 data:\n");
    
    printf("Code: ");
    scanf("%d", &emp2.code);
    printf("Salary: ");
    scanf("%f", &emp2.salary);
    printf("Name: ");
    scanf("%s", &emp2.name);

    printf("Enter employee 3 data:\n");
    
    printf("Code: ");
    scanf("%d", &emp3.code);
    printf("Salary: ");
    scanf("%f", &emp3.salary);
    printf("Name: ");
    scanf("%s", &emp3.name);

    printf("\n\n\n");
    printf("Employee 1 data:\n");
    printf("Code: %d\n", emp1.code);
    printf("Salary: %f\n",emp1.salary);
    printf("Name: %s\n",emp1.name);

    
    printf("Employee 2 data:\n");
    
    printf("Code: %d\n", emp2.code);
    printf("Salary: %f\n", emp2.salary);
    printf("Name: %s\n", emp2.name);

    printf("Employee 3 data:\n");
    
    printf("Code: %d\n", emp3.code);
    printf("Salary: %f\n", emp3.salary);
    printf("Name: %s\n", emp3.name);

    return 0;
}
