#include <stdio.h>
int main(){
    printf("Enter a name: ");

    // immediatly print the above printf
    fflush(stdout);

    char name [50];
    scanf("%50s",name);

    printf("Hello, %s",name);    
}