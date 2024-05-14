/*
* check white space charcters using isspace
* \t \n \v \f \r ' '
* output
*  \t is white-space character
* \v is white-space character
* j is not white-space character
* 5 is not white-space character
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    int var1 = '\f';
    int var2 = '\v';
    int var3 = 'j';
    int var4 = '5';

    // check if white-space character var1
    if(isspace(var1)){
        printf("%c is white-space character\n",var1);
    } else {
        printf("%c is not white-space characters\n",var1);
    }

    // check if white-space charcter var2
    if(isspace(var2)){
        printf("%c is white-space character\n",var2);
    } else {
        printf("%c is not white-space characters\n",var2);
    }

    // check if white-space character var3
    if(isspace(var3)){
        printf("%c is white-space character\n",var3);
    } else {
        printf("%c is not white-space characters\n",var3);
    }

    // check if white-space character var4
    if(isspace(var4)){
        printf("%c is white-space character\n",var4);
    } else {
        printf("%c is not white-space characters\n",var4);
    }
}