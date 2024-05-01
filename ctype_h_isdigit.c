#include <stdio.h>
#include <ctype.h>
int main(){

	// send a character to input check is digit? or not
	int a = 'a';
	int b = '2';

	// check is digit given input

	if(isdigit(a)){

	printf("a = |%c| is a digit..\n",a);

	} else {

	printf("a = |%c| is not digit\n",a);

	}

	if(isdigit(b)){

	printf("b = |%c| is digit\n",b);

	} else {

	printf("b = |%c| is not a digit\n",b);

	}
	return 0;
}
