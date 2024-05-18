#include <stdio.h>
int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in read mode ("r")
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        // If fopen failed, print an error message and return
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Variables to hold the read data
    char a[100],b[100],c[100],d[100];

    // Read and print each line from the file
    while (fscanf(file, "%s%s%s%s", &a,&b,&c,&d)==4) {
        // Print the line
        printf("%s %s %s %s\n",a,b,c,d);
    }

    // Close the file
    fclose(file);

    return 0;
}
