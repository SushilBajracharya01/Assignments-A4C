//A program to input and output of String using Scanf() and Printf().

#include <stdio.h>
#include <string.h>

int main(){
	char stri[999];
	printf("\nEnter string :");
	scanf("%s",stri);
	printf("\nThe string you entered : %s\n",stri);
	return 0;
}
