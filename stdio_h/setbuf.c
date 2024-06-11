#include<stdio.h>
int main(){
    FILE *file;

    file = fopen("example.txt","w");

    if(file == NULL){
        perror("Error open the file");

        return -1;
    }

    char buffer[BUFSIZ];

    setbuf(file,buffer);

    fputs("Hello world is setbuf function",file);

    fclose(file);

    return 0;
}