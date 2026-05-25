/*
Problem: Read from one file and store it twice in another file
Concept: File I/O
*/

#include <stdio.h>

int main() {
    FILE* file1_ptr;
    FILE* file2_ptr;

    file1_ptr = fopen("file_1.txt", "r");
    file2_ptr = fopen("file_2.txt", "w");

    while(1) {
        char ch = fgetc(file1_ptr);

        if(ch == EOF) {
            break;
        }

        fputc(ch, file2_ptr);
        fputc(ch, file2_ptr);
    }
    fclose(file1_ptr);
    fclose(file2_ptr);
    
    return 0;
}