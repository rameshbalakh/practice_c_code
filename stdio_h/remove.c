#include <stdio.h>
#include <string.h>

int main(){
    // this integer store the remove function result
    int res;
    // create a file pointer
        FILE *ptr;
    
        char filename[]="filename.txt";
        // open a file in writting mode
        ptr = fopen(filename,"w");
        // print this text in the file using pointer
        fprintf(ptr, "%s","This line is testing purpose of remove function");
        
        // close the file pointer
        fclose(ptr);
        
        // remove the file using remove() function
        res = remove(filename);
        
        // check the result if file removed or not
        if(res == 0){
            printf("file deleted successfully");
        } else {
            printf("file not deleted ");
        }

    return 0;
}