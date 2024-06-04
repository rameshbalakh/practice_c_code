#include <stdio.h>
int main(){
    // create a file pointer
    FILE *ptr;
    // ch reading purpose
    int ch;
    // sample text write to the file
    char str[] = "This is rewind function checking";

    //open a file write mode
    ptr = fopen("rewind.txt","w");

    //write the string to the file using pointer
    fwrite(str, 1, sizeof(str), ptr);
    // close the file
    fclose(ptr);

    // again open the file to reading purpose
    ptr = fopen("rewind.txt","r");

    while(1){
        // store the character by character in the ch variable
        ch = fgetc(ptr);
    // if pointer point to the endof character break the excution
    if(feof(ptr)){
        break;
    }
    // print the output
    printf("%c",ch);
    }
    // this rewind function send the pointer to the starting position
    rewind(ptr);
    // print the new line character visiblity
    printf("\n");
    while(1){
        // again pointer read the character by character to store the ch variable
        ch = fgetc(ptr);
        //if pointer point to the end of file character it will break the excution
        if(feof(ptr)){
            break;
        }
        // print the output
        printf("%c",ch);
    }
    // close the file
    fclose(ptr);

    return 0;
}