#include <stdio.h>
#include <ctype.h>
/*
*This program is check user input alphabet or not
*using inbuilt function
*This function it is below the ctype.h header
*/
int main(){
    char c;
    // user input
    printf("Enter a character: ");
    scanf("%c",&c);

    // This condition check given input alphabets or not
    if(isalpha(c)){
        printf("%c is a alphabets...",c);
    } else {
        printf("%c This is not alphabet..",c);
    }
}