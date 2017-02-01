//A program to input a string and find out the length of string without using strlen().

#include <stdio.h>
#include <string.h>

int main(){
	char str[9999];
	int i=0;
	
  printf("enter string : ");
  while((str[i]=getchar())!='\n'){
		i++;
	}
  
  printf("The length of the string is %d",i);
	
  return 0;
}
