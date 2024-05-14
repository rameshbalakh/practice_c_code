/*
* THIS FUNCTION USED TO CONVERT UPPERCASE TO LOWERCASE
* SUPPOSE YOU ENTER LOWER CASE CHARACTER OUTPUT SAME LOWER CASE
* INPUT
* ABCDEFGHIJKLMNOPQRSTUVWXYZ
* OUTPUT
* abcdefghijklmnopqrstuvwxyz
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char c [100];
    char newc[100];
    
    // get input from user 
    printf("Type a string uppercase: ");
    scanf("%s",&c);

    // just small print given string before convert
    printf("Before convert: %s\n",c);

    for(int i=0; i<sizeof(c); i++){
        // convert to lower case at the same time put a converted character
        // you need to use 17th line comment the 19th & 23th line then enable 17th line
        //putchar(tolower(c[i]));
        // convert given string to lower and store newc variable
        newc[i] = tolower(c[i]);
    }

    // print a given string after convert
    printf("After convert: %s\n",newc);
    
    
}