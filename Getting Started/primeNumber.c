// Write a program to find if a number is prime or not.

// Print all the prime numbers from 1 to 300.

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    // Check if a specific number is prime

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Print all prime numbers from 1 to 300
    
    printf("Prime numbers from 1 to 300 are:\n");
    for (int i = 1; i <= 300; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}