//A program to compare two string using strcmp().

#include <stdio.h>
#include <string.h>

int main(){
	char fir[999],sec[999];
	
	printf("\nEnter 1st string : ");
	gets(fir);
	printf("Enter 2nd string : ");
	gets(sec);
	
	if(strcmp(fir,sec)==0){
		printf("\nThe 2 strings are IDENTICAL.\n");
	}
	else{
		printf("\nThe 2 strings are NOT IDENTICAL.\n");
	}
	return 0;
}
