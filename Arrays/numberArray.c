// 25 numbers are entered from the keyboard into an array. 
// Write a program to find out how many of them are positive, negative, and how many are even and how many odd.

#include <stdio.h>

int main() {
    int arr[25];
    int positiveCount = 0, negativeCount = 0, evenCount = 0, oddCount = 0;

    // Input 25 numbers
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Analyze the numbers
    for (int i = 0; i < 25; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output the results
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}