// Write a program using pointers to find the smallest number in an array of 25 integers.

#include <stdio.h>

int main() {
    int arr[25];
    int *ptr;
    int smallest;

    // Input 25 integers
    printf("Enter 25 integers:\n");
    for (int i = 0; i < 25; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize pointer and smallest
    ptr = arr;
    smallest = *ptr;

    // Find the smallest number using pointers
    for (int i = 1; i < 25; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    // Output the smallest number
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}