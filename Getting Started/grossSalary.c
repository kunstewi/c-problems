/*If an employee's basic salary is under 15000, then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs 15000 then HRA = Rs 5000 and DA = 98% of basic salary.
If an employee's salary is input through the keyboard then write a program to find his gross salary.*/

#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, grossSalary;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary < 15000) {
        HRA = 0.10 * basicSalary;
        DA = 0.90 * basicSalary;
    } else {
        HRA = 5000;
        DA = 0.98 * basicSalary;
    }

    grossSalary = basicSalary + HRA + DA;

    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}