// Write a program that will read a line and delete from it all occurrences of the word "the" in any case.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char line[200], result[200];
    char *word;
    const char *delimiters = " \t\n";
    int firstWord = 1;

    // Input the line from the user
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);

    // Remove the newline character if present
    line[strcspn(line, "\n")] = '\0';

    // Initialize the result string
    result[0] = '\0';

    // Tokenize the line
    word = strtok(line, delimiters);
    while (word != NULL) {
        char temp[100];
        strcpy(temp, word);
        toLowerCase(temp);

        // Check if the word is "the"
        if (strcmp(temp, "the") != 0) {
            if (!firstWord) {
                strcat(result, " ");
            }
            strcat(result, word);
            firstWord = 0;
        }

        word = strtok(NULL, delimiters);
    }

    // Display the result
    printf("The line without 'the' is: \"%s\"\n", result);

    return 0;
}