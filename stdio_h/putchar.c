 // give any one character, it will get back what you give
 // for example a
 // output     You entered: a
#include <stdio.h>
int main(){
    // create a variable
    char character;

    // display to user
    printf("Enter a character: ");
    character = getchar(); // get input from user only character using getchar function

   putchar(character); // display to output
}