#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// Function declarations
void scan_word(int* occurrences);
bool is_anagram(const int* occurrences1, const int* occurrences2);

int main(void) {
    // Declare arrays to keep track of letter occurrences for each word
    int occurrences1[26] = {0};
    int occurrences2[26] = {0};

    printf("Enter first word: ");
    scan_word(occurrences1); // Call scan_word function for the first word

    printf("Enter second word: ");
    scan_word(occurrences2); // Call scan_word function for the second word

    if (is_anagram(occurrences1, occurrences2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

// Function to scan a word and update letter occurrences in the occurrences array
void scan_word(int* occurrences) {
    char c;
    // The while loop continues until a newline character ('\n') is encountered, indicating the end of the word
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            occurrences[toupper(c) - 'A']++; // Increment the count of the corresponding letter in the occurrences array
        }
    }
}

// Function to check if two words are anagrams based on their occurrences arrays
bool is_anagram(const int* occurrences1, const int* occurrences2) {
    for (int i = 0; i < 26; i++) {
        if (occurrences1[i] != occurrences2[i]) {
            return false; // If any count of a letter differs between the two arrays, they are not anagrams
        }
    }
    return true; // All counts match, the words are anagrams
}
