// write a program to calculate overtime pay of 10 employees. overtime is paid at the rate of 12 per hour for every hour worked above 40 hours.
// assume employees do not work for fractional part of an hour.

#include <stdio.h>

#define OVERTIME_RATE 12.00
#define REGULAR_HOURS 40

int main() {
    int numEmployees, hoursWorked, overtimeHours;
    float overtimePay;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 1; i <= numEmployees; i++) {
        printf("Enter the total hours worked by employee %d: ", i);
        scanf("%d", &hoursWorked);

        if (hoursWorked > REGULAR_HOURS) {
            overtimeHours = hoursWorked - REGULAR_HOURS;
            overtimePay = overtimeHours * OVERTIME_RATE;
            printf("Employee %d worked %d overtime hours. Overtime pay: Rs %.2f\n", i, overtimeHours, overtimePay);
        } else {
            printf("Employee %d did not work any overtime hours.\n", i);
        }
    }

    return 0;
}