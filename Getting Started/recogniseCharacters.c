// Write a program to determine whether the input character was capital or small , a digit or a special symbol.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("The character '%c' is a capital letter.\n", ch);
    } else if (islower(ch)) {
        printf("The character '%c' is a small letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is a special symbol.\n", ch);
    }

    return 0;
}