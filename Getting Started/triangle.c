//if the length of three sides of a triangle are input through the keyboard write a c program to find the area of the triangle. 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%f", &a);
    printf("Side b: ");
    scanf("%f", &b);
    printf("Side c: ");
    scanf("%f", &c);

    // Check if the entered sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        s = (a + b + c) / 2;

        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}