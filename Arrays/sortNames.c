// Write a program to alphabetically sort a set of names stored using an array of pointers to strings. The names are entered by the user.
// The program should sort the names in ascending order and display the sorted list. 

#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 100

void sortNames(char *names[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main() {
    char *names[MAX_NAMES];
    char buffer[MAX_LENGTH];
    int n;

    // Input the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    // Input the names
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove the newline character
        names[i] = strdup(buffer); // Allocate memory and copy the string
    }

    // Sort the names
    sortNames(names, n);

    // Display the sorted list
    printf("Sorted list of names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
        free(names[i]); // Free the allocated memory
    }

    return 0;
}