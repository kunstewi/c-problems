// Write a function power (a,b), to calculate the value of a raised to b.

#include <stdio.h>

// Function to calculate a raised to the power of b
double power(double a, int b) {
    double result = 1.0;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base value (a): ");
    scanf("%lf", &base);
    printf("Enter the exponent value (b): ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}