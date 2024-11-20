/*The marks obtained in 5 subjects are input through the keyboard. Write a program to calculate the division.
above or equal to 60% then First Division
between 50 to 59% second division
between 40 to 49% third division
below 40 fail. */

#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, percentage;
    int i;

    printf("Enter marks obtained in 5 subjects: \n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("First Division\n");
    } else if (percentage >= 50) {
        printf("Second Division\n");
    } else if (percentage >= 40) {
        printf("Third Division\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}