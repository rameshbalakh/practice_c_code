#include <stdio.h>
int main(){
    FILE *ptr;


    fpos_t position;
    // open a file using file pointer
    ptr = fopen("fgetpos.txt","w+");

    //this function pass the position to the ptr
    fgetpos(ptr, &position);

    // write a statment to the file using pointer
    fputs("Hello world", ptr);

    //set a pointer again starting position
    fsetpos(ptr, &position);

    // override the lines to the file using pointer
    fputs("This is override for hello world from starting position",ptr);

    //close the pointer
    fclose(ptr);

    return 0;
}