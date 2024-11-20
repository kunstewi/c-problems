// Write a c program to calculate largest and smallest number in a input of 5 different numbers through the keyboard.

#include <stdio.h>

int main() {
    int numbers[5];
    int largest, smallest;

    printf("Enter 5 different numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = smallest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}