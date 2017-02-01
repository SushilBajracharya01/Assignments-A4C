// A program to input and output of Character array using getchar() and Putchar(). 

#include <stdio.h>

int main(){
	
	  int i=0;
	  char arr[9999];
	
	  printf("enter string : ");
	
    while((arr[i]=getchar())!='\n'){
		    i++;
	  }
	  i=0;
	  while(arr[i]!='\n'){
		  putchar(arr[i]);
		  i++;
	  }	
}	
	
