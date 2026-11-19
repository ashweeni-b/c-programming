// Problem: Area of Circle and Volume of Cylinder

#include <stdio.h>

int main() {
    const float pi = 3.14159265359;

    // Area of Circle
    float radius;

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    float area = pi * radius * radius;

    printf("Area of circle is %.4f\n", area);

    // Volume of Cylinder  
    float length;

    printf("\nEnter the length of cylinder: ");
    scanf("%f", &length);

    float volume = area * length;

    printf("Volume of cylinder is %.4f\n", volume);

    return 0;
}