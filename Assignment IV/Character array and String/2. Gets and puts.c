//A program input and output of String using gets() and puts().

#include <stdio.h>
#include <string.h>

int main(){
	char stri[999];
	printf("\nEnter string :");
	gets(stri);
	printf("\nThe string \n"); 
	puts(stri);
	return 0;
}
