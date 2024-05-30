#include <stdio.h>

int main(){
 // create a file pointer
    FILE *ptr;
    // this variable used for fetch and store RAM  to reading purpose
    int ch;
    // open a file point to the file first character
    ptr = fopen("sample.txt","r");

    // check is there file or not
    if(ptr == NULL){
        printf("Error opening file....");
        return 1;
    }

    // while loop used for the loop is running till endof file when come
    while(1){
        // fetch the data from the file using ptr pointer it assign  to ch variable
        ch = fgetc(ptr);
        // once the pointer ptr reach the end of file character it will break the excution
        if(feof(ptr)){
            break;
        }
        // display the output
        putchar(ch);
    }
    return 0;
}
