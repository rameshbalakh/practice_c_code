#include <stdio.h>
int main(){

    // create a file pointer to write or read
    FILE *fptr;
    // sample data 
    char student_2[]="kamalakasan";
    char student_3[]="M.G.Ramachandhiran";
    char student_4[]="Sivaji ganesan";
    fptr = fopen("sample.txt","w");

    // check the file whether or not
    if(fptr == NULL){
        printf("Error to open a file !");
        return 0;
    }
    
    // write a data to the file one bye one
    fprintf(fptr,"student no 1: %s\n","Rajinikanth");
    fprintf(fptr,"student no 2: %s\n",student_2);
    fprintf(fptr,"student no 3: %s\n",student_3);
    fprintf(fptr,"student no 4: %s\n",student_4);

    // you should close the file using pointer
    fclose(fptr);
    // small conformation to written
    printf("file written successfully");
}