//A program to copy a string from one to another using strcpy().

#include <stdio.h>
#include <string.h>

int main(){
	char rece[999];
	char domi[999];
	
	printf("\nEnter 1st string: ");
	gets(rece);
	printf("Enter 2nd string: ");
	gets(domi);
	
  // Prints 1st and 2nd string.
	printf("\n1st string :");
	puts(rece);
	printf("2nd string :");
	puts(domi);
	
  printf("\n");
	
  printf("strcpy(1st,2nd) : %s.\n",strcpy(rece,domi));
	return 0;
}
	
