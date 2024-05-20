#include <stdio.h>
 
int main()
{
    // defining buffer
    char buf[100];
 
    // using fgets to take input from stdin
    printf("Enter input a sentence: ");
    fgets(buf, 100, stdin);
    printf("string is: %s\n", buf);
 
    return 0;
}