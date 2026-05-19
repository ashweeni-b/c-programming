/*
Problem: Take strings using %c and %s
and confirm whether they are equal
Concept: Strings
*/

#include <stdio.h>

int main() {
    char string1[5];
    char string2[5];

    printf("Enter string 1: ");
    for(int i = 0; i < 5; i++) {
        scanf("%c", &string1[i]);
    }
    
    printf("String 1 is ");
    for(int i = 0; i < 5; i++) {
        printf("%c", string1[i]);
    }

    printf("\nEnter string 2: ");
    scanf("%s", &string2);
    
    printf("String 2 is %s", string2);

    return 0;
}