// An array contains 10 integers. Recieve the number to be searched from the user. Write a program to search for the number in the array and display the position of the number in the array and number of times it occurs in the array. If the number is not found, display a message that the number is not found in the array.

#include <stdio.h>

int main() {
    int arr[10];
    int number, count = 0;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the number to be searched
    printf("Enter the number to be searched: ");
    scanf("%d", &number);

    // Search for the number in the array
    printf("Positions of %d in the array: ", number);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == number) {
            printf("%d ", i + 1);
            count++;
        }
    }

    // Output the result
    if (count > 0) {
        printf("\nNumber of occurrences: %d\n", count);
    } else {
        printf("\nThe number %d is not found in the array.\n", number);
    }

    return 0;
}