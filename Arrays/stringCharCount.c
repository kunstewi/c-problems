// Write a program to count the number of characters in a string. The string is entered by the user. The program should count the number of characters in the string and display the result. For example, if the user enters "Hello, World!", the program should output 13.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count the number of characters
    int count = strlen(str);

    // Display the result
    printf("The number of characters in the string is: %d\n", count);

    return 0;
}