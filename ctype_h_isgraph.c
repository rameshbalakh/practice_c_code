#include <stdio.h>
#include <ctype.h>
/*
* This code is check given character graphical representaion or not
* using inbuilt function isgraph()
* ouput 
* |3| can be printed
* |h| can be printed
* | | cannot be printed
*/
int main(){
    int var1 = '3';
    int var2 = 'h';
    int var3 = '\t';
    //int var3 = ' ';
    int test;
    
    printf("Enter a character: ");
    scanf("%d",&test);

    if(isgraph(test)){
        printf("|%c|this is printable character\n",test);
    } else {
        printf("non printable character\n");
    }
    if(isgraph(var1)){
        printf("|%c| can be printed\n",var1);
    } else {
        printf("|%c| cannot be printed\n",var1);
    }
     if(isgraph(var2)){
        printf("|%c| can be printed\n",var2);
    } else {
        printf("|%c| cannot be printed\n",var2);
    }
     if(isgraph(var3)){
        printf("|%c| can be printed\n",var3);
    } else {
        printf("|%c| cannot be printed\n",var3);
    }
}