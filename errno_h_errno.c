/*
errno-value	    Error
    1           Operation not permitted
    2           No such file or directory
    3           No such process
    4           Interrupted system call
    5           I/O error
    6           No such device or address
    7       The argument list is too long
    8           Exec format error
    9           Bad file number
    10          No child processes
    11          Try again
    12          Out of memory
    13          Permission denied
    etc.......  etc........
*OUTPUT 
* output depending on error in this code
* errno depending on the error
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int main () {
   FILE *fp;

    
   fp = fopen("file.txt", "r");

   if( fp == NULL ) {
    printf("%d\n",errno);
    printf("%s\n",strerror(errno));
   } else {
      fclose(fp);
   }
   
   return(0);
}