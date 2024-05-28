#include <stdio.h>

int main() {
    FILE *fp;
    int numbers[] = {10, 20, 30, 40, 50};
    size_t num_elements = sizeof(numbers) / sizeof(numbers[0]);

    // Open file for writing in binary
    fp = fopen("fwritefile.bin", "wb");
    if (fp == NULL) {
        perror("Unable to open file");
        return 1;
    }

    // Write array to file
    size_t elements_written = fwrite(numbers, sizeof(int), num_elements, fp);
    
    // check elements_written != num_elements if condition true will get error
    if (elements_written != num_elements) {
        perror("Write error");
    } else {
        printf("Successfully written %zu elements.\n", elements_written);
    }

    // Close the file 
    fclose(fp);
    return 0;
}
