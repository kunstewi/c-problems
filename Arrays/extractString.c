// Write a program that extracts part of the given string from the specified position. For example, if the string is "Working with strings is fun", then if from position 3, 4 charecters are to be extracted, the output should be "king".

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int position, length;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Input the starting position and length of the substring
    printf("Enter the starting position: ");
    scanf("%d", &position);
    printf("Enter the number of characters to extract: ");
    scanf("%d", &length);

    // Extract the substring
    strncpy(result, str + position, length);
    result[length] = '\0'; // Null-terminate the result string

    // Display the result
    printf("The extracted part of the string is: \"%s\"\n", result);

    return 0;
}