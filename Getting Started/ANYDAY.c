// Write a program in C that finds the weekday of a date (year month day) input through the keyword since 01/01/01 till present.

// Using Zeller's Congruence

#include <stdio.h>

int getWeekday(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int K = year % 100;
    int J = year / 100;
    int f = day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 + 5 * J;
    return f % 7;
}

const char* getWeekdayName(int weekday) {
    switch (weekday) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid";
    }
}

int main() {
    int year, month, day;
    
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);
    
    int weekday = getWeekday(year, month, day);
    printf("The weekday is: %s\n", getWeekdayName(weekday));
    
    return 0;
}

// Using <time.h> library

// #include <stdio.h>
// #include <time.h>

// int main() {
//     int year, month, day;
//     struct tm time_in = { 0 };
//     time_t time_temp;
//     const char* weekday_name[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

//     printf("Enter year: ");
//     scanf("%d", &year);
//     printf("Enter month: ");
//     scanf("%d", &month);
//     printf("Enter day: ");
//     scanf("%d", &day);

//     time_in.tm_year = year - 1900;
//     time_in.tm_mon = month - 1;
//     time_in.tm_mday = day;

//     time_temp = mktime(&time_in);

//     if (time_temp != -1) {
//         printf("The weekday is: %s\n", weekday_name[time_in.tm_wday]);
//     } else {
//         printf("Invalid date\n");
//     }

//     return 0;
// }