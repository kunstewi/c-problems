// Write a program that takes a set of names of individuals and abbreviates the first and middle name to their first letter.

#include <stdio.h>
#include <string.h>

void abbreviateName(char *fullName, char *abbreviatedName) {
    char *token;
    int isFirstWord = 1;

    // Tokenize the full name
    token = strtok(fullName, " ");
    while (token != NULL) {
        if (isFirstWord) {
            // Abbreviate the first name
            abbreviatedName[0] = token[0];
            abbreviatedName[1] = '.';
            abbreviatedName[2] = ' ';
            abbreviatedName += 3;
            isFirstWord = 0;
        } else {
            // Check if it's the last name
            if (strchr(token, ' ') == NULL && strtok(NULL, " ") == NULL) {
                // Copy the last name
                strcpy(abbreviatedName, token);
                break;
            } else {
                // Abbreviate the middle name
                abbreviatedName[0] = token[0];
                abbreviatedName[1] = '.';
                abbreviatedName[2] = ' ';
                abbreviatedName += 3;
            }
        }
        token = strtok(NULL, " ");
    }
}

int main() {
    char fullName[100];
    char abbreviatedName[100] = "";

    // Input the full name from the user
    printf("Enter the full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove the newline character if present
    fullName[strcspn(fullName, "\n")] = '\0';

    // Abbreviate the name
    abbreviateName(fullName, abbreviatedName);

    // Display the abbreviated name
    printf("The abbreviated name is: \"%s\"\n", abbreviatedName);

    return 0;
}