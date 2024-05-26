/*
output 
your line starts from here: o 1: Rajinikanth
*/

#include <stdio.h>  
  
int main() {  

FILE *file;  // create a file pointer
file = fopen("sample.txt", "r");  // To open a file read mode using fopen 
if (file == NULL) {   // check file is there or not
printf("Unable to open the file.\n");  
return 1;  
}  
  
char line[100]; //   create line variable and reserved 100 bytes memory
fseek(file, 9, SEEK_SET);   // fseek function file pointer and 9 is where to start from the file  

/*
SEEK_SET: Beginning of the file.
SEEK_CUR: Current position of the file pointer.
SEEK_END: End of the file. 
*/

fgets(line, sizeof(line), file);  
printf("your line starts from here: %s", line);   // print the output for display
  
fclose(file);  // close the file pointer
return 0;  
}  