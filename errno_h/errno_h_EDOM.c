/*
    *error value   error description
    *   33          Math argument out of domain of func
    * OUTPUT
    * Invalid value
    * valid value
    */
#include <stdio.h>
#include <math.h>
#include <errno.h>
int main(){
    double var1;
    
    // this stage errno = 0 no errors
    errno = 0;  
    var1 = sqrt(10);
    // this stage errno = 0 no error

    if(errno == EDOM){
        printf("Invalid value\n");
    } else {
        printf("valid value\n");
    }

    // this stage errno = 0 no errors
    errno = 0;  
    var1 = sqrt(-20);
    
    // this stage errno = 33 because math function failed error accured
    // errno = 33;
    if(errno == EDOM){
        printf("Invalid value\n");
    } else {
        printf("valid value\n");
    }
}