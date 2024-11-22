// Write macro definitions for the following :

// 1. To find the arithmetic mean of two given numbers.

// 2. To find absolute value of a number.

// 3. To convert an upper case alphabet to lower case.

// 4. To obtain the biggest of three numbers.

#include <stdio.h>

// Macro to find the arithmetic mean of two given numbers
#define ARITHMETIC_MEAN(a, b) (((a) + (b)) / 2.0)

// Macro to find the absolute value of a number
#define ABSOLUTE_VALUE(x) ((x) < 0 ? -(x) : (x))

// Macro to convert an upper case alphabet to lower case
#define TO_LOWER_CASE(c) ((c) >= 'A' && (c) <= 'Z' ? (c) + ('a' - 'A') : (c))

// Macro to obtain the biggest of three numbers
#define MAX_OF_THREE(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main() {
    int num1, num2, num3;
    int num;
    char upper;

    // Input for arithmetic mean
    printf("Enter two numbers to find their arithmetic mean: ");
    scanf("%d %d", &num1, &num2);
    printf("Arithmetic mean of %d and %d: %f\n", num1, num2, ARITHMETIC_MEAN(num1, num2));

    // Input for absolute value
    printf("Enter a number to find its absolute value: ");
    scanf("%d", &num);
    printf("Absolute value of %d: %d\n", num, ABSOLUTE_VALUE(num));

    // Input for converting upper case to lower case
    printf("Enter an upper case character to convert to lower case: ");
    scanf(" %c", &upper); // Note the space before %c to consume any leftover newline character
    printf("Lower case of %c: %c\n", upper, TO_LOWER_CASE(upper));

    // Input for finding the biggest of three numbers
    printf("Enter three numbers to find the biggest: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Biggest of %d, %d, and %d: %d\n", num1, num2, num3, MAX_OF_THREE(num1, num2, num3));

    return 0;
}