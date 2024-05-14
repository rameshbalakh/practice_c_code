#include <stdio.h>
#include <ctype.h>
int main(){
    
    char var1[]="web";
    char var2[] = "0xE";

    if(isxdigit(var1[0])){
        printf("%s is hexa decimal value\n",var1);
    } else {
        printf("%s is not hexa deciaml value\n",var1);
    }

    if(isxdigit(var2[0])){
        printf("%s is hexa decimal value\n",var2);
    } else {
        printf("%s is not hexa deciaml value\n",var2);
    }
}