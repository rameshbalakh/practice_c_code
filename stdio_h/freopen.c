#include <stdio.h>
int main(){
    FILE *ptr;


    printf("This text is redirecting to stdout\n");

    ptr = fopen("freopen.txt","w+");

    printf("This is sample text for freopen",ptr);

    fclose(ptr);

    return 0;
}
