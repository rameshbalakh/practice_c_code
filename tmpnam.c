#include <stdio.h>
int main(){
    char buff[L_tmpnam];
    char *ptr;

    // returns temporary name
    tmpnam(buff);
    printf("Termporary name: %s\n",buff);

    // ptr is null return tmpnam
    ptr = tmpnam(NULL);
    printf("Temporary name: %s\n",ptr);


    return 0;

}