/*
* check upper case character
* input
* charac = H;
* output 
* H is upper character
* input 
* charac = h or 7;
* h is not upper character
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char charac;

    // user input
    printf("Enter a character: ");
    scanf("%c",&charac);

    // check is upper character
    if(isupper(charac)){
        printf("%c is upper character\n",charac);
    } else {
        printf("%c is not upper character\n",charac);
    }
}