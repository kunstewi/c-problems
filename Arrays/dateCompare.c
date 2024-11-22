// Write a function that compares two given dates. To store a date use a structure that contains three members namely day, month and year. If the dates are equal, the function should return 0. If the first date is greater, the function should return 1. If the second date is greater, the function should return -1.

#include <stdio.h>

// Define the structure for a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
int compareDates(struct Date date1, struct Date date2) {
    if (date1.year > date2.year) {
        return 1;
    } else if (date1.year < date2.year) {
        return -1;
    } else {
        if (date1.month > date2.month) {
            return 1;
        } else if (date1.month < date2.month) {
            return -1;
        } else {
            if (date1.day > date2.day) {
                return 1;
            } else if (date1.day < date2.day) {
                return -1;
            } else {
                return 0;
            }
        }
    }
}

int main() {
    struct Date date1, date2;
    int result;

    // Input the first date
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input the second date
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    result = compareDates(date1, date2);

    // Display the result
    if (result == 0) {
        printf("The dates are equal.\n");
    } else if (result == 1) {
        printf("The first date is greater.\n");
    } else {
        printf("The second date is greater.\n");
    }

    return 0;
}