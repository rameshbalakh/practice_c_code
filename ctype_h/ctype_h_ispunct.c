/*
* find punctuation character using ispunct
* what is punctuation character
* , . / \ ! @ # $ etc...
* output
* 
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    int var1 = 't';
    int var2 = '5';
    int var3 = ',';
    int var4 = '!';

    if(ispunct(var1)){
        printf("%c is punctuation character\n",var1);
    } else {
        printf("%c is not a punctuation character\n",var1);
    }
     if(ispunct(var2)){
        printf("%c is punctuation character\n",var2);
    } else {
        printf("%c is not a punctuation character\n",var2);
    }
     if(ispunct(var3)){
        printf("%c is punctuation character\n",var3);
    } else {
        printf("%c is not a punctuation character\n",var3);
    }
     if(ispunct(var4)){
        printf("%c is punctuation character\n",var4);
    } else {
        printf("%c is not a punctuation character\n",var4);
    }
}