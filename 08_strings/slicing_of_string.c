/*
Problem: Slicing of the string
Concept: Strings, Functions and Loops
Approach:
Take string as an input
Take starting and ending position for slice
Iterate through the string and print the sliced string,
which has the starting and ending positions
*/

#include <stdio.h>

char sliced_string(char *string, int m, int n);

int main()
{
    int m, n;
    char string[100];

    // Input the string
    printf("Enter the string: ");
    scanf("%[^\n]%*c", &string);

    // Input the starting and ending positions
    // for the sliced string
    printf("Enter starting postion: ");
    scanf("%d", &m);

    printf("Enter ending position: ");
    scanf("%d", &n);

    printf("String is %s\n", string);

    // Pass the string and positions to the function
    sliced_string(string, m, n);

    printf("Sliced string is %s", string);

    return 0;
}

char sliced_string(char* string, int m, int n) {
    for(int i = 0, j = m - 1; string[i] != '\0'; i++) {
        if(j == n) {
            string[i] = '\0';
            break;
        }
        string[i] = string[j];
        j++;
    }
}