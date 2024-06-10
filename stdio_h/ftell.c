#include <stdio.h>
int main(){
    FILE *ptr;
    int len;

    ptr = fopen("sample.txt", "r");

    if(ptr == NULL) {
        perror ("Error opening the file");
        return (-1);
    }

    // ptr start with zero
    fseek(ptr, 0, SEEK_END);

    // ftell function store the current ptr position
    len = ftell(ptr);

    // close the file
    fclose(ptr);

    // display the output to the user
    printf("Total size of sample file: %d",len);

    return 0;
}