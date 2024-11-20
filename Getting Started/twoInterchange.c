// Two numbers are input through keyboard into two locations C and D. Write a program to interchange the contents of c and D.

#include <stdio.h>

int main() {
    int C, D, temp;

    printf("Enter the value of C: ");
    scanf("%d", &C);
    printf("Enter the value of D: ");
    scanf("%d", &D);

    // Interchange the contents of C and D
    temp = C;
    C = D;
    D = temp;

    printf("After interchanging:\n");
    printf("Value of C: %d\n", C);
    printf("Value of D: %d\n", D);

    return 0;
}