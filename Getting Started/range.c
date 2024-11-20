// Write a program to find the range of a set of numbers entered through the keyboard.
// Range is the difference between the smallest and biggest number in the list.

#include <stdio.h>

int main() {
    int n, i, number;
    int smallest, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements must be greater than zero.\n");
        return 1;
    }

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &number);
        if (i == 0) {
            smallest = largest = number;
        } else {
            if (number < smallest) {
                smallest = number;
            }
            if (number > largest) {
                largest = number;
            }
        }
    }

    int range = largest - smallest;
    printf("The range of the set of numbers is: %d\n", range);

    return 0;
}