#include <stdio.h>
int main(){
    FILE *ptr;
    fpos_t position;  // this is a type variable only access for fgetpos and fsetpos

    ptr = fopen("sam.txt","w+"); // open a file point the pointer variable 

    // this function used for pointer point to the starting position
    fgetpos(ptr,&position);
    // write the data to the file using ptr
    fputs("This is new function fsetpos",ptr); 
    // again ptr come to first position
    fsetpos(ptr, &position);
    // override the data same file again
    fputs("This is override the previous data", ptr);

    // close the file pointer
    fclose(ptr);

    return 0;

}