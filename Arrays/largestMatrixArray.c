// Write a program to pick up the largest number from any 5x5 matrix and display it. The matrix is entered by the user.

#include <stdio.h>

int main() {
    int matrix[5][5];
    int largest;

    // Input the 5x5 matrix
    printf("Enter the elements of the 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize largest with the first element of the matrix
    largest = matrix[0][0];

    // Find the largest number in the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    // Output the largest number
    printf("The largest number in the matrix is: %d\n", largest);

    return 0;
}