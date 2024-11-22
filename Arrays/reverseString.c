// Write a program to reverse the string stored in an array of pointers to strings.

#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char *strings[MAX_STRINGS];
    char buffer[MAX_LENGTH];
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    // Input the strings
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove the newline character
        strings[i] = strdup(buffer); // Allocate memory and copy the string
    }

    // Reverse each string
    for (int i = 0; i < n; i++) {
        reverseString(strings[i]);
    }

    // Display the reversed strings
    printf("Reversed strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]); // Free the allocated memory
    }

    return 0;
}