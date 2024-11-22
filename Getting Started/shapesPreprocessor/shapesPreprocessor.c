// Write macro definitions with arguement for calculation of area and perimeter of a triangle, a square and a circle.
// Store these macro definitions in a file called "areaperi.h".
// Include this file in the program, and call the macro definitions for calculating area and perimeter for different squares, triangles and circles.

#include <stdio.h>
#include "areaperi.h"

int main() {
    // Example values
    double base = 5.0, height = 10.0;
    double side = 4.0;
    double radius = 3.0;
    double a = 3.0, b = 4.0, c = 5.0;

    // Calculate and print area and perimeter of a triangle
    printf("Area of triangle: %f\n", AREA_TRIANGLE(base, height));
    printf("Perimeter of triangle: %f\n", PERIMETER_TRIANGLE(a, b, c));

    // Calculate and print area and perimeter of a square
    printf("Area of square: %f\n", AREA_SQUARE(side));
    printf("Perimeter of square: %f\n", PERIMETER_SQUARE(side));

    // Calculate and print area and perimeter of a circle
    printf("Area of circle: %f\n", AREA_CIRCLE(radius));
    printf("Perimeter of circle: %f\n", PERIMETER_CIRCLE(radius));

    return 0;
}