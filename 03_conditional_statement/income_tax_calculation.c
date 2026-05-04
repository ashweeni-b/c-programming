/*
Problem: Calculation of income tax according to the slabs
If income is below 2.5 L the income tax is 0%, 
if between 2.5 L to 5.0 L it is 5%, 
if between 5.0 L to 10.0 L it is 20% and
if it is above 10.0 L it is 30%

Concept: Conditonal statements and operators

Approach: Take income as input from user.
If income is below 2.5 L the tax is Rs. 0,
if income is between 2.5 L to 5.0 L, tax upto 2.5 L is 0 and 
tax from 2.5 L upto income * (5 /100),
else if income is between 5.0 L to 10.0 L, tax upto 2.5 L is 0,
tax between 2.5 L to 5.0 L is income * (5 / 100) and
tax from 5.0 L upto income is income * (20 / 100) and
else
tax upto 2.5 L is 0,
tax between 2.5 L to 5.0 L is  income * (5 / 100),
tax between 5.0 L to 10.0 L is income * (20 / 100),
and tax from 10.0 L upto income is income * (30 / 100)
*/

#include <stdio.h>

int main() {
    float income, tax;

    // Taking income from user
    printf("Enter income: ");
    scanf("%f", &income);

    // Calculating income tax
    if (income < 250000.0) {
        tax = 0;
    } else if (income > 250000.0 && income <= 500000.0) {
        tax = (income - 250000.0) * (5.0 / 100.0);
    } else if (income > 500000.0 && income <= 1000000.0) {
        tax = (income - 500000.0) * (20.0 / 100.0) + (500000.0 - 250000.0) * (5.0 / 100.0);
    } else {
        tax = (income - 1000000.0) * (30.0 / 100.0) + (income - 500000.0) * (20.0 / 100.0) + (500000.0 - 250000.0) * (5.0 / 100.0);
    }

    printf("Tax paid by user: Rs. %.2f", tax);

    return 0;
}