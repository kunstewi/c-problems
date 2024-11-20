// if a five number digit is input through the keyboard, write a program to calculate the sum of its digits.

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Check if the number is a five-digit number
    if (number < 10000 || number > 99999) {
        printf("The number entered is not a five-digit number.\n");
        return 1;
    }

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}