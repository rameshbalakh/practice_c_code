// scanf is a inbuil function in the stdio.h header
#include <stdio.h>
int main(){
    // declare the integer type variable
    int var;
    // diplay to the user what is he give the input
    printf("Enter a integer: ");
    // get the input from user using scanf fucntion store in var variable
    scanf("%d",&var);

    // diplay the output 
    printf("you have entered %d\n",var);
}