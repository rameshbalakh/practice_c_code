#include <stdio.h>
#include <ctype.h>
/*
* what is control character?
* Horizontal tab- ‘\t’
* Line feed- ‘\n’
* Backspace- ‘\b’
* Carriage return- ‘\r’
* Form feed- ‘\f’
* Escape
* Alert Character- ‘\a’
*/
int main(){
    int i=0,j=0;
    // without using control character
    char str1[] = "Does it have any control \f characters";
    // with using control character
    char str2[] = "Does \a it \t have any control characters";

    // The process continues until the control character is reached
    while(!iscntrl(str1[i])){
        putchar(str1[i]);
        i++;
    }

    // The  process continues until the control character is reached
    // once control character came loop will exit
    while(!iscntrl(str2[j])){
        putchar(str2[j]);
        j++;
    }
    /*
    * output
    * Does it have any control Does
    */
}