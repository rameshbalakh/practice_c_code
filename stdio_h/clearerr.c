#include <stdio.h>

int main() {
    FILE *file;
    int c;

    // Open a file for reading
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Attempt to read characters from the file until EOF
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    // Check if we reached EOF
    if (feof(file)) {
        printf("\nEnd of file reached.\n");
    } else if (ferror(file)) {
        printf("\nAn error occurred while reading the file.\n");
    }

    // Clear the error and EOF indicators
    clearerr(file);

    // Reset file pointer position to the beginning
    fseek(file, 0, SEEK_SET);

    // Try reading from the file again after clearing indicators
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    // Close the file
    fclose(file);

    return 0;
}
