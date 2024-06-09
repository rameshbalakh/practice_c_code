#include <stdio.h>
int main(){
    FILE *ptr;


    printf("This text is redirecting to stdout\n");

    ptr = freopen("freopen.txt","w+", stdout);

    printf("This is sample text for freopen",ptr);

    fclose(ptr);

    return 0;
}
