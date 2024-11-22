// Write a program that converts a string to an integer. The string is entered by the user. The program should convert the string to an integer and display the result. For example, if the user enters "12345", the program should output 12345.

// Using the atoi() function

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int num;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert the string to an integer
    num = atoi(str);

    // Display the result
    printf("The converted integer is: %d\n", num);

    return 0;
}

// Using self made function

// #include <stdio.h>

// int stringToInt(char *str) {
//     int result = 0;
//     int sign = 1;
//     int i = 0;

//     // Handle negative numbers
//     if (str[0] == '-') {
//         sign = -1;
//         i++;
//     }

//     // Convert each character to the corresponding integer value
//     for (; str[i] != '\0'; ++i) {
//         result = result * 10 + (str[i] - '0');
//     }

//     return sign * result;
// }

// int main() {
//     char str[100];
//     int num;

//     // Input the string from the user
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Remove the newline character if present
//     str[strcspn(str, "\n")] = '\0';

//     // Convert the string to an integer
//     num = stringToInt(str);

//     // Display the result
//     printf("The converted integer is: %d\n", num);

//     return 0;
// }