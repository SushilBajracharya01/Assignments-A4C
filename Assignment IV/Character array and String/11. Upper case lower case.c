//a program to input a string and convert it into upper case and vice versa.

#include <stdio.h>
#include <string.h>

int main(){
	char str[999];
	int cn;
	printf("Enter String : ");
	gets(str);
	printf("To convert into lower case PRESS 1,\nTo convert into upper case PRESS 2.\n==>");
	scanf("%d",&cn);
	
	switch (cn){
		case 1:
		printf("lower case : %s.",strlwr(str));
		break;
		case 2:
		printf("UPPER CASE : %s.",strupr(str));
		break;
		default:
		printf("INVALID ENTRY %d");
	}
	return 0;
}
