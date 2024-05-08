#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 10  // define a buffer size fixed

int main(){
    char buff[BUFF_SIZE];
    int secret_pin = 0;

    // enter a password from user
    printf("Enter the password: ");
    scanf("%s",buff);

    // compare user input correct password or not
    if(strcmp(buff,"password")== 0){
        secret_pin = 100;  // if given password is correct set the value 100 lf secret_pin
    }

    // illustration purpose 
    if(secret_pin == 100){
        printf("Access Granted...\n");
    } else {
        printf("Access denied...\n");
    }
}