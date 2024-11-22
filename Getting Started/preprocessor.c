// Write macro definitions for the following :

// 1. To test whether a character is a small case letter or not.

// 2. To test whether a character is an upper case letter or not.

// 3. To test whether a character is an alphabet or not. Make use of the macros of 1 and 2.

// 4. To obtain the bigger of two numbers.

#include <stdio.h>

// Macro to test whether a character is a small case letter
#define IS_LOWER_CASE(c) ((c) >= 'a' && (c) <= 'z')

// Macro to test whether a character is an upper case letter
#define IS_UPPER_CASE(c) ((c) >= 'A' && (c) <= 'Z')

// Macro to test whether a character is an alphabet
#define IS_ALPHABET(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

// Macro to obtain the bigger of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    char ch = 'a';
    int num1 = 10, num2 = 20;

    printf("Is '%c' a lower case letter? %s\n", ch, IS_LOWER_CASE(ch) ? "Yes" : "No");
    printf("Is '%c' an upper case letter? %s\n", ch, IS_UPPER_CASE(ch) ? "Yes" : "No");
    printf("Is '%c' an alphabet? %s\n", ch, IS_ALPHABET(ch) ? "Yes" : "No");
    printf("The bigger number between %d and %d is %d\n", num1, num2, MAX(num1, num2));

    return 0;
}