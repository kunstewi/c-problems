// write a program to receive an integer and find its octal equivalent and binary equivalent.

#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}

void printOctal(int n) {
    if (n > 7) {
        printOctal(n / 8);
    }
    printf("%d", n % 8);
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    printf("Binary equivalent: ");
    printBinary(number);
    printf("\n");
    
    printf("Octal equivalent: ");
    printOctal(number);
    printf("\n");
    
    return 0;
}