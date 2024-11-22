// Write a program which performs the following tasks :

// 1. Initialize an integer array of 10 elements.
// 2. Pass the entire array to a function named 'modifyArray'.
// 3. In the function, multiply each element of the array by 3.
// 4. Return the control to main() and print the new array elements in main().

#include <stdio.h>

// Function to modify the array
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 3;
    }
}

int main() {
    int arr[10];

    // Initialize the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Pass the array to modifyArray function
    modifyArray(arr, 10);

    // Print the modified array
    printf("Modified array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}