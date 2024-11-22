// Write a program to stores a few strings using an array of pointers to strings. Recieve a string and check if it is present in the array of strings.

#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 5

int main() {
    // Array of pointers to strings
    const char *strings[NUM_STRINGS] = {
        "apple",
        "banana",
        "cherry",
        "date",
        "elderberry"
    };

    char input[100];
    int found = 0;

    // Input the string to search for
    printf("Enter a string to search for: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    input[strcspn(input, "\n")] = '\0';

    // Check if the input string is present in the array
    for (int i = 0; i < NUM_STRINGS; i++) {
        if (strcmp(input, strings[i]) == 0) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("The string \"%s\" is present in the array.\n", input);
    } else {
        printf("The string \"%s\" is not present in the array.\n", input);
    }

    return 0;
}