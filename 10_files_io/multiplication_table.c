/*
Problem: Store multiplication table of number
entered by the user in the file
Concept: File I/O
File: multiplication_table.txt
*/

#include <stdio.h>

int main() {
    FILE *ptr;

    ptr = fopen("multiplication_table.txt", "w");

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    fprintf(ptr, "%s", "Multiplication Table\n\n");

    int i = 1;

    while(i != 11) {
        fprintf(ptr, "%d x %d = %d\n", num, i, num * i);
        i++;
    }

    fclose(ptr);

    return 0;
}