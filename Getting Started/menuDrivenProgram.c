/* write a menu driven program which has following options

factorial of a given number
prime or not
odd or even
exit

once a menu item is selected the appropiate action should be taken place.
once the action is done the menu should reappear, unless the user selects the exit option.*/

#include <stdio.h>
#include <stdbool.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

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

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int choice, number;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Factorial of a given number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Factorial of %d = %llu\n", number, factorial(number));
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);
                if (isPrime(number)) {
                    printf("%d is a prime number.\n", number);
                } else {
                    printf("%d is not a prime number.\n", number);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &number);
                if (isEven(number)) {
                    printf("%d is an even number.\n", number);
                } else {
                    printf("%d is an odd number.\n", number);
                }
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}