// Write a recursive function to obtain the sum of first 25 natural numbers using recursion.

#include <stdio.h>

// Function to calculate the sum of first n natural numbers recursively
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n = 25;
    int sum = sumOfNaturalNumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}