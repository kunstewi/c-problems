// Write a program to find average marks obtained by a class of 30 students in a test.

#include <stdio.h>

int main() {
    int marks[30];
    int sum = 0;
    float average;

    // Input marks for 30 students
    printf("Enter marks for 30 students:\n");
    for (int i = 0; i < 30; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    average = sum / 30.0;

    // Output the average
    printf("The average marks of the class is: %.2f\n", average);

    return 0;
}