#include <stdio.h>
#include <ctype.h>
/*
* This is check given input alphabets or not
* This function inbuilt function
*/
int main(){
    char c;
    
    //input from user
    printf("Enter a character: ");
    scanf("%c",&c);

    // check the condition given input alphabets or not
    if(isalpha(c)){
        printf("%c This is alphabet...");
    } else{
        printf("%c This is not a alphabet...");
    }
}