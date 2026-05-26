/*
Problem: Digit Frequency
Concept: Arrays and Strings
Platform: HackerRank
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char* s;
    s = (char*) malloc(1024 * sizeof(char));
    
    scanf("%[^\n]", s);
    
    char num[] = "0123456789";
    
    for(int i = 0; i < 10; i++) {
        int count = 0;
        for(int j = 0; j < strlen(s); j++) {
            if(s[j] == num[i]) {
                count++;
            } 
        }
        printf("%d ", count);
    }  
    
    return 0;
}
