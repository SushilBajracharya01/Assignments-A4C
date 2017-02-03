// a program to read a string and search a specified word in given string.
#include <stdio.h>
#include <string.h>

int main()
{
   char str[200];
   char word[100];
   char *ser;
	
	printf("Enter any string : ");
	gets(str);
	
	printf("Enter the word you want to search in the string : ");
	gets(word);
	
	ser = strstr(str,word);
	
	printf("The string that you are searching : %s",ser);
   
   return(0);
}
