/*
Problem: Reading integers from file
Concept: File I/O
File: integers.txt
*/

#include <stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("integers.txt", "r");

    int num1, num2, num3;

    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);

    printf("Numbers are: %d, %d and %d", num1, num2, num3);

    fclose(ptr);

    return 0;
}