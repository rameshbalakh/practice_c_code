#include <stdio.h>
int main(){
    FILE *ptr;

    // the file cannot be created null returned
    ptr = tmpfile();

    printf("Temporary file created...!");

    fclose(ptr);

    return 0;
}