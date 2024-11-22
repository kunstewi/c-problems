// A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.

#include <stdio.h>

// Function to print the prime factors of a given number
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= n / 2; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // This condition is to handle the case when n is a prime number
    // greater than 2
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        primeFactors(number);
    }

    return 0;
}