/*
Problem: Reading a character from file
Concept: File I/O
File: hello_world.txt
*/

#include <stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("hello_world.txt", "r");

    char ch = fgetc(ptr);

    printf("First character is %c", ch);

    fclose(ptr);

    return 0;
}