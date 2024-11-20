// Three sides of a triangle is input through the keyboard. Write a program to determine whether the triangle is valid or not.
// Also check if the triangle is isosceles, equilateral, scalene or right angled triangle.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%f", &a);
    printf("Side b: ");
    scanf("%f", &b);
    printf("Side c: ");
    scanf("%f", &c);

    // Check if the entered sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("The entered sides form a valid triangle.\n");

        // Check for equilateral triangle
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        }
        // Check for isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        }
        // Check for right-angled triangle
        else if (fabs(a * a + b * b - c * c) < 1e-6 || fabs(a * a + c * c - b * b) < 1e-6 || fabs(b * b + c * c - a * a) < 1e-6) {
            printf("The triangle is right-angled.\n");
        }
        // If none of the above, it is a scalene triangle
        else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}