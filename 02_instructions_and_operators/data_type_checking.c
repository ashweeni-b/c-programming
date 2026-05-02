/*
Problem: Checking the data type of equation 3.0/8-2
Concept: Type Conversion and Arithmetic Instruction
Appraoch: Evaluate the expression and check the sizeof
the output variable
*/

#include <stdio.h>

int main() {
    float output = 3.0 / 8 - 2;

    // Evaluate the expression
    printf("Output of 3.0 / 8 - 2 = %f\n", output);

    // Check the data type of output
    printf("The size of output is: %d\n", sizeof(output));

    // Since the size of output is 4, the data type is float

    return 0;
}