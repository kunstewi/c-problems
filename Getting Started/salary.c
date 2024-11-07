// Salary calculating c program.

#include <stdio.h>
int main() {
    float bp, da, hra, grpay;
    printf("\n Enter basic pay: ");
    scanf("%f", &bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    grpay = bp + da + hra;
    printf("Basic Pay: %.2f\n", bp);
    printf("Dearness Allowance: %.2f\n", da);
    printf("House Rent Allowance: %.2f\n", hra);
    printf("Gross Pay: %.2f\n", grpay);
    return 0;
}