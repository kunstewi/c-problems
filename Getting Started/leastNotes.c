// Consider a currency system in which there are notes of seven denominations namely Rs 1, 2, 5, 10, 50 and 100.
// if a sum of Rs N is entered through the keyboard write a program to compute the smallest number of notes that will combine to give Rs N.

#include <stdio.h>

int main() {
    int amount;
    int notes100, notes50, notes10, notes5, notes2, notes1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes10 = amount / 10;
    amount %= 10;

    notes5 = amount / 5;
    amount %= 5;

    notes2 = amount / 2;
    amount %= 2;

    notes1 = amount;

    printf("Number of 100 Rs notes: %d\n", notes100);
    printf("Number of 50 Rs notes: %d\n", notes50);
    printf("Number of 10 Rs notes: %d\n", notes10);
    printf("Number of 5 Rs notes: %d\n", notes5);
    printf("Number of 2 Rs notes: %d\n", notes2);
    printf("Number of 1 Rs notes: %d\n", notes1);

    return 0;
}