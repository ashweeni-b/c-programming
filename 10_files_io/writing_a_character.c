/*
Problem: Writing a character to the file
Concpet: File I/O
*/

#include <stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("alphabet.txt", "w");

    fputc('A', ptr);

    fclose(ptr);
}