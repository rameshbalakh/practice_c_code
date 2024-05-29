#include <stdio.h>  
#include <errno.h>   // header file of perror
int main() {  
    // create a file pointer
    FILE *file;

    // open a file point to the pointer
    file = fopen("nonexistent.txt", "r");

    // is there a file ? or not
    if (file == NULL) {  

        // excute a error
        perror("Error ");
       // printf("%d",errno);  
    }  
    return 0;  
}  