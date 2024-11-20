// write a program to find the factorial value of any number entered through the keyboard.


// using loops.

#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}

// Using recursion

// #include <stdio.h>

// unsigned long long factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number < 0) {
//         printf("Factorial of a negative number doesn't exist.\n");
//     } else {
//         printf("Factorial of %d = %llu\n", number, factorial(number));
//     }

//     return 0;
// }