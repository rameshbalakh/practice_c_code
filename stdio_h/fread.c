#include <stdio.h>

int main () 
{
    // buffer to store data
    char buffer[600];
    
    // FILE object
    FILE * file;
    // opening a file in read mode
    file = fopen("fwritefile.bin", "r");
    
    int count = fread(&buffer, sizeof(char), 600, file);
    
    // close opened file
    fclose(file);
    
    printf("Data read from the file:\n%s \n", buffer);
   
    return 0;
}
