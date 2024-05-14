/*
* INPUT
*abcdefghijklmnopqrstuvwxyz
* OUTPUT
* ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char c[100];
    int i=0;

    // Input from user lowercase
    printf("Type a string lowercase: ");
    scanf("%s",&c);

    while(c[i]){
        // convert to uppercase and put the charcters to display
        putchar(toupper(c[i]));
        i++;
    }
}