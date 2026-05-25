/*
Problem: Write an integer to the file
Concept: File I/O
*/

#include <stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("area.txt", "w");

    float area = 50.25;

    fprintf(ptr, "%f", area);

    fclose(ptr);

    return 0;
}