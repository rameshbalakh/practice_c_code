#include <stdio.h>

int main(){
    char name [] ="Jerry";
    int age = 27;
    char str[100];

    // sprintf function used for print a data formats
    // it store and print string format
    sprintf(str, "%s %d",name, age);

    puts(str);

    return 0;
}