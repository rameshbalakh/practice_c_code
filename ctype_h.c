#include <stdio.h>
#include <ctype.h>
int main(){
    int a = 'd';
    int b = 65;
    int c = '\t';
    int d = ' ';

    if(isalnum(a)){
        printf("a = %c is alphanumeric\n",a);
    } else {
        printf("a = %c is not alphanumeric\n",a);
    }
     if(isalnum(b)){
        printf("b = %c is alphanumeric\n",b);
    } else {
        printf("b = %c is not alphanumeric\n",b);
    }
     if(isalnum(c)){
        printf("c = %c is alphanumeric\n",c);
    } else {
        printf("c = %c is not alphanumeric\n",c);
    }
     if(isalnum(d)){
        printf("d = %c is alphanumeric\n",d);
    } else {
        printf("d = %c is not alphanumeric\n",d);
    }
}