#include <stdio.h>
int main(){
    FILE *ptr;

    // sample display for user
    printf("This text is redirecting to stdout\n");

    // reopen the file using stdout redirecting
    ptr = freopen("freopen.txt","w+", stdout);

    //This text for print the file
    printf("This is sample text for freopen",ptr);

    // close the ptr
    fclose(ptr);

    return 0;
}
