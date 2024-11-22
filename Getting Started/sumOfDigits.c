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

// // Recursive solution

// #include <stdio.h>

// // Recursive function to calculate the sum of digits
// int sumOfDigits(int n) {
//     if (n == 0) {
//         return 0; // Base case: if the number is 0, return 0
//     } else {
//         return (n % 10) + sumOfDigits(n / 10); // Recursive case
//     }
// }

// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Handle negative numbers by taking the absolute value
//     if (number < 0) {
//         number = -number;
//     }

//     int sum = sumOfDigits(number);
//     printf("Sum of the digits: %d\n", sum);

//     return 0;
// }