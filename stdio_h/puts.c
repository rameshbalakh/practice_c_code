#include <stdio.h>
 
int main()
{
    // defining buffer
    char buf[100];
 
    // using fgets to take input from stdin
    printf("Enter input a sentence: ");
    fgets(buf, 100, stdin);

    // this function is used to print the given string
    puts(buf);

}