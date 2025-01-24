#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[100];

    // Opening a file for writing
    file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Writing to the file
    fputs("Hello, World!\n", file);
    fclose(file); // Closing the file

    // Opening the file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Reading from the file
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file); // Closing the file
    return EXIT_SUCCESS;
}
