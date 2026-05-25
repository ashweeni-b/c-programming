/*
Problem: Modify the current integer value in the file
to double its value
Concept: File I/O
*/

#include <stdio.h>

int main() {
    FILE* read_ptr;
    FILE* write_ptr;

    read_ptr = fopen("value.txt", "r");

    int num;

    fscanf(read_ptr, "%d", &num);

    printf("%d", num);

    num = 2 * num;
    
    write_ptr = fopen("value.txt", "w");
    fprintf(write_ptr, "%d", num);

    fclose(read_ptr);
    fclose(write_ptr);

    return 0;
}