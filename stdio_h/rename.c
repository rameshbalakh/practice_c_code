#include <stdio.h>
int main(){
    // create a array stored old file name
    char oldname[]="sam.txt";
    //create a array store new filename
    char newname[]="newsam.txt";

    // used for return value of rename
    int result;

    //rename the oldname to newname
    result = rename(oldname,newname);

    //compare result is zero or not
    if(result == 0){
        printf("file renamed Successfully");
    } else {
        printf("file renamed not success");
    }
}