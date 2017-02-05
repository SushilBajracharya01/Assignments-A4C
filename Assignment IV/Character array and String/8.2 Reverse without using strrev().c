// a program to reverse string without strrev().
#include <stdio.h>
#include <string.h>

int main(){
	char ch,str[100],rev[100];
	int i=0;
	
	printf("Enter string : ");
	
  // loop to input string
  while(ch!='\n'){
		ch=getchar();
		str[i]=ch;
		i++;
	}
	
	int len = strlen(str)-2; 
	for(i=0;i<strlen(str);i++,len--){
		rev[i]=str[len];
	}
  
	printf("The Reverse is %s",rev);
	return 0;
}
