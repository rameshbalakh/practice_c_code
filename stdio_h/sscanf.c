#include <stdio.h>
#include <string.h>

int main(){
    int day,year;

    char wd[20], month[20], dtm[100];

    // copy the data to the dtm
    strcpy(dtm, "Saturday march 25 1989");

    //scanf from the dtm using variables
    sscanf(dtm, "%s %s %d %d",wd,month,&day,&year);

    //print the output formated
    printf("%s %d %d = %s\n",month, day, year, wd);


    return 0;
}