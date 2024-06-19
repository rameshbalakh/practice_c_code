#include <stdio.h>
#include <stdarg.h>

void customPrintf(const char *format, ...){
    va_list args;
    va_start(args, format);
    vprintf(format, args);

    va_end(args);
}

int main(){
    customPrintf("This is a test: %d, %s, %f\n", 42, "hello", 3.14);


    return 0;
}