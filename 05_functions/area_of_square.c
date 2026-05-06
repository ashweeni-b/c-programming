/*
Problem: Area of square
Concept: Library function
Approach:
Include math.h library function
Calculate area using pow() function
Area of square = side ^ 2
*/

#include <stdio.h>
#include <math.h>

int main() {
    int side;

    // Input side from the user
    printf("Enter side: ");
    scanf("%d", &side);

    // Calculate area
    float area = pow(side, 2);

    printf("Area of square with side %d is %.2f", side, area);

    return 0;
}