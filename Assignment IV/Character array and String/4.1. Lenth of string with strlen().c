//A program to input a string and find out the length of string using strlen(). 

#include<stdio.h>
#include<string.h>

int main(){
	
 	char str[999];
	
  	printf("Enter a string : ");
	gets(str);
	
 	printf("The length of the string is %d.",strlen(str));
	
 	return 0;
}
