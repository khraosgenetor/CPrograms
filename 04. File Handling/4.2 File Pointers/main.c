#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    long position;

    // Opening a file for writing
    file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Writing characters to the file
    fputc('A', file);
    fputc('B', file);
    fputc('C', file);
    fclose(file); // Closing the file

    // Opening the file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Move the file pointer to the beginning
    fseek(file, 0, SEEK_SET);
    position = ftell(file); // Get the current position
    printf("Current position: %ld\n", position); // Should be 0

    // Read and print characters
    while ((ch = fgetc(file)) != EOF) {
        printf("Read character: %c\n", ch);
    }

    // Move the file pointer to the second character
    fseek(file, 1, SEEK_SET);
    ch = fgetc(file); // Read the second character
    printf("Character at position 1: %c\n", ch);

    fclose(file); // Closing the file
    return EXIT_SUCCESS;
}
