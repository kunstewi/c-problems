// Write a program that interchanges elements att odd positions with elements at even positions in an array of 10 integers.

#include <stdio.h>

int main() {
    int arr[10];
    
    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Interchange elements at odd positions with elements at even positions
    for (int i = 0; i < 10; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Output the modified array
    printf("Modified array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}