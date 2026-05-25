/*
Problem: Reading file character by character
Concept: File I/O
*/

#include <stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("info.txt", "r");

    while (1)
    {
        char ch = fgetc(ptr);
        
        printf("%c", ch);

        if(ch == EOF) {
            break;
        }
    }
    
    return 0;
}