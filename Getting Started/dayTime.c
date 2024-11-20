// Write a program to print 24 hours of day with suitable suffixes like AM, PM, noon or midnight.

#include <stdio.h>

void printTimeWithSuffix(int hour) {
    if (hour == 0) {
        printf("12 Midnight\n");
    } else if (hour == 12) {
        printf("12 Noon\n");
    } else if (hour < 12) {
        printf("%d AM\n", hour);
    } else {
        printf("%d PM\n", hour - 12);
    }
}

int main() {
    for (int hour = 0; hour < 24; hour++) {
        printTimeWithSuffix(hour);
    }
    return 0;
}