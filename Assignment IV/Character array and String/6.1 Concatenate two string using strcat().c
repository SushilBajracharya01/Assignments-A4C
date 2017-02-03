// A program to concatenate two string using strcat().

#include<stdio.h>
#include<string.h>

int main(){
	char fir[999],sec[999];
	
	printf("\nEnter 1st string : ");
	gets(fir);
	printf("Enter 2nd string : ");
	gets(sec);
	
	printf("Combining the 2 strings we get : %s",strcat(fir,sec));
	
	return 0;
}
