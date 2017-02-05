//without using Strcmp(). 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char ch,f[100],s[100];
	int i,count;
	
  // string in first.
	printf("1st string : ");
	while(ch!='\n'){
		ch=getchar();
		f[i]=ch;
		i++;
	}
	
  // string in second.
	printf("2nd string : ");
	i=0;
	ch=0;
	while(ch!='\n'){
		ch=getchar();
		s[i]=ch;
		i++;
	}
  
	if(strlen(f)!=strlen(s)){
		printf("IT IS NOT IDENTICAL");
		exit(0);
	}
	else{
		for(i=0;i<strlen(f);i++){
			if(f[i]==s[i]){
					count++;
			}
		}
	}
	
  if(count==strlen(f)){
		printf("IT IS IDENTICAL");
	}
	else{
		printf("IT IS NOT IDENTICAL");
	}
	return 0;
}
