#include <stdio.h>
#include <ctype.h>
int main(){
    char var1;
    //char var1 = 'Q';

    // user input to 
    printf("Enter a character: ");
    scanf("%c",&var1);

    // check is lower character given input
    if(iswlower(var1)){
        printf("%c is lower character",var1);
    } else {
        printf("%c is not lower character",var1);
    }
}