// Write a program to delete all vowels from a sentence. Assume that the sentence is not more than 100 characters long.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char sentence[101], result[101];
    int j = 0;

    // Input the sentence from the user
    printf("Enter a sentence (max 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    // Delete vowels from the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (!isVowel(sentence[i])) {
            result[j++] = sentence[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    // Display the result
    printf("The sentence without vowels is: \"%s\"\n", result);

    return 0;
}