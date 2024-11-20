// If ages of Ram shyam and ajay are input through the keyboard. Write a program to determine the youngest of the three.

#include <stdio.h>

int main() {
    int ageRam, ageShyam, ageAjay;

    printf("Enter the age of Ram: ");
    scanf("%d", &ageRam);
    printf("Enter the age of Shyam: ");
    scanf("%d", &ageShyam);
    printf("Enter the age of Ajay: ");
    scanf("%d", &ageAjay);

    if (ageRam < ageShyam && ageRam < ageAjay) {
        printf("Ram is the youngest.\n");
    } else if (ageShyam < ageRam && ageShyam < ageAjay) {
        printf("Shyam is the youngest.\n");
    } else if (ageAjay < ageRam && ageAjay < ageShyam) {
        printf("Ajay is the youngest.\n");
    } else {
        printf("There is a tie in ages.\n");
    }

    return 0;
}