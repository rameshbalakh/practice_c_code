#include <stdio.h>
int main(){
    FILE *ptr;
    int len;

    ptr = fopen("sample.txt", "r");

    if(ptr == NULL) {
        perror ("Error opening the file");
        return (-1);
    }

    fseek(ptr, 0, SEEK_END);

    len = ftell(ptr);

    fclose(ptr);

    printf("Total size of sample file: %d",len);

    return 0;
}