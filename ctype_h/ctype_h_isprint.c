// check given input printable or not
/*
* output
* 8 is printable
* H is printable
*      is not printable
*  is not printable
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    int var1 = '8';
    int var2 = 'H';
    int var3 = '\t';
    int var4 = ' ';
    
    // check if printable or not
    if(isprint(var1)){
        printf("%c is printable\n",var1);
    } else {
        printf("%c is not printable\n",var1);
    }
    if(isprint(var2)){
        printf("%c is printable\n",var2);
    } else {
        printf("%c is not printable\n",var2);
    }
    if(isprint(var3)){
        printf("%c is printable\n",var3);
    } else {
        printf("%c is not printable\n",var3);
    }
    if(isprint(var3)){
        printf("%c is printable\n",var4);
    } else {
        printf("%c is not printable\n",var4);
    }
}