/*
Problem: Demonstration of & and * operators
Concept: Pointers
*/

#include <stdio.h>

int main() {
    // Integer-type pointer
    int i = 72;
    int* j = &i;

    printf("Integer-type pointer\n");
    printf("Value of i: %d\n", i);
    printf("Address of i in hexadecimal format: %p\n", &i);
    printf("Address of i in integer format: %u\n", &i);
    printf("Address of i using j: %p\n", j);
    printf("Value of i using *j: %d\n", *j);
    printf("Value of i using *(&i): %d\n", *(&i));

    // Character-type pointer
    char a = '*';
    char* b = &a;

    printf("\n\nCharacter-type pointer\n");
    printf("Value of a: %c\n", a);
    printf("Address of a in hexadecimal format: %p\n", &a);
    printf("Address of a in integer format: %u\n", &a);
    printf("Address of a using b: %p\n", b);
    printf("Value of a using *b: %c\n", *b);
    printf("Value of a using *(&a): %c\n", *(&a));

    // Floating-point-type pointer
    float m = 3.14;
    float* n = &m;

    printf("\n\nFloating-point-type pointer\n");
    printf("Value of m: %f\n", m);
    printf("Address of m in hexadecimal format: %p\n", &m);
    printf("Address of m in integer format: %u\n", &m);
    printf("Address of m using n: %p\n", n);
    printf("Value of m using *n: %f\n", *n);
    printf("Value of m using *(&m): %f\n", *(&m));

    return 0;
}