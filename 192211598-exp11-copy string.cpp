#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    // Input: Source string
    printf("Enter the source string: ");
    if (fgets(source, sizeof(source), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove the newline character if present
    source[strcspn(source, "\n")] = '\0';

    // Check for buffer overflow
    if (strlen(source) >= sizeof(source) - 1) {
        printf("Input string too long.\n");
        return 1;
    }

    // Copy the string using strcpy
    if (strcpy(destination, source) == NULL) {
        printf("Error copying string.\n");
        return 1;
    }

    // Output: Destination string
    printf("Destination string: %s\n", destination);

    return 0;
}
