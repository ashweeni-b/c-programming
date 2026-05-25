/*
Problem: Read integers from the file
Concept: File I/O
File: numbers.txt
*/

#include <stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("numbers.txt", "r");

    int num;

    fscanf(ptr, "%d", &num);

    printf("Number is %d", num);

    fclose(ptr);

    return 0;
}