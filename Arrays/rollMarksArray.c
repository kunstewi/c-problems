// Create a 2D array that stores the roll numbers and marks of 10 students side by side in a matrix.

#include <stdio.h>

int main() {
    int students[10][2];

    // Input roll numbers and marks for 10 students
    printf("Enter roll numbers and marks for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d Roll Number: ", i + 1);
        scanf("%d", &students[i][0]);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &students[i][1]);
    }

    // Output the roll numbers and marks
    printf("\nRoll Numbers and Marks:\n");
    printf("Roll Number\tMarks\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t\t%d\n", students[i][0], students[i][1]);
    }

    return 0;
}