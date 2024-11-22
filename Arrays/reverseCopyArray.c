// Write a program to copy the contents of a 5 element integer array into another array in reverse order.

#include <stdio.h>

int main() {
    int arr[5], reverseArr[5];

    // Input 5 integers
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Copy elements into reverseArr in reverse order
    for (int i = 0; i < 5; i++) {
        reverseArr[i] = arr[4 - i];
    }

    // Output the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", reverseArr[i]);
    }
    printf("\n");

    return 0;
}