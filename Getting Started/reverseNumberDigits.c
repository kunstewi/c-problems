// if a five digit number is input through the keyboar, write a c program to reverse the number.

#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Check if the number is a five-digit number
    if (number < 10000 || number > 99999) {
        printf("The number entered is not a five-digit number.\n");
        return 1;
    }

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}