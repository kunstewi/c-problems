// Write macro definitions with arguments for calculation of simple interest and amount.

// Store these macro definitions in a file called "interest.h".

// Include this file in your program and use the macro definitions for calculating simple interest and amount.

#include <stdio.h>
#include "interest.h"

int main() {
    double principal, rate, time, si, amount;

    // Input for principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest and amount using macros
    si = SIMPLE_INTEREST(principal, rate, time);
    amount = AMOUNT(principal, si);

    // Print the results
    printf("Simple Interest: %f\n", si);
    printf("Total Amount: %f\n", amount);

    return 0;
}