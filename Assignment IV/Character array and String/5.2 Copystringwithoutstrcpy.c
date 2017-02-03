//A program to copy a string from one to another without using strcpy().

#include <stdio.h>
#include <string.h>

int main(){
	char f[999],s[999],swt[999],i=0;
	
	printf("ENter 1st string :");
	while((f[i]=getchar())!='\n'){
		i++;
	}
	
	i=0;
	printf("ENter 2nd string :");
	while((s[i]=getchar())!='\n'){
		i++;
	}
	
	printf("\nThe first string : %s",f);
	printf("\nThe second string : %s",s);
	
	// replacing all the elements of arry s 
	// with elements of array f.
	for(i=0;i<=strlen(f);i++){
		s[i]=f[i];
		}

	printf("\n== = ==Copy== = ==\n");
	printf("\nThe first string : %s",f);
	printf("\nThe second string : %s",s);
	return 0;
}
	
