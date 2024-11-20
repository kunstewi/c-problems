// Write a program to find the absolute value of a number entered through the keyboard.

#include <stdio.h>

int main() {
    float number;
    
    printf("Enter a number: ");
    scanf("%f", &number);
    
    if (number < 0) {
        number = -number;
    }
    
    printf("The absolute value is %.2f\n", number);
    
    return 0;
}