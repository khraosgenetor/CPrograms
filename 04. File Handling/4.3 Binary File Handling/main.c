#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float score;
} Student;

int main() {
    FILE *file;
    Student students[3] = {
        {1, 85.5},
        {2, 90.0},
        {3, 78.5}
    };

    // Writing binary data to a file
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // Write the array of students to the file
    size_t written = fwrite(students, sizeof(Student), 3, file);
    if (written != 3) {
        perror("Error writing to file");
    }

    fclose(file); // Closing the file

    // Reading binary data from a file
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    Student readStudents[3];
    size_t read = fread(readStudents, sizeof(Student), 3, file);
    if (read != 3) {
        perror("Error reading from file");
    }

    // Print the read data
    for (size_t i = 0; i < read; i++) {
        printf("Student ID: %d, Score: %.2f\n", readStudents[i].id, readStudents[i].score);
    }

    fclose(file); // Closing the file
    return EXIT_SUCCESS;
}
