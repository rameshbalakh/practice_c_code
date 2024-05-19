#include <stdio.h>
int main(){
    // create a variable
    char character;

    // display to user
    printf("Enter a character: ");
    character = getchar(); // get input from user only character using getchar function

    printf("You entered: %c\n",character); // display to output
}