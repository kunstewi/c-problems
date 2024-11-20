/* A company insures a driver :

if the driver is married
if the driver is unmarried male above 30
if the driver is unmarried female above 25

in all other cases no insurance. Write a c program to determine whether the driver will be insured or not.

sex and age of the driver are input.*/

#include <stdio.h>

int main() {
    char sex;
    int age;
    char maritalStatus;

    printf("Enter marital status (m for married, u for unmarried): ");
    scanf(" %c", &maritalStatus);
    printf("Enter sex (m for male, f for female): ");
    scanf(" %c", &sex);
    printf("Enter age: ");
    scanf("%d", &age);

    if (maritalStatus == 'm') {
        printf("The driver will be insured.\n");
    } else if (maritalStatus == 'u' && sex == 'm' && age > 30) {
        printf("The driver will be insured.\n");
    } else if (maritalStatus == 'u' && sex == 'f' && age > 25) {
        printf("The driver will be insured.\n");
    } else {
        printf("The driver will not be insured.\n");
    }

    return 0;
}