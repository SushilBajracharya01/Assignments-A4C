// a program to initialize 10 numbers .

#include <stdio.h>
#include <conio.h>

int main (){
	int num[10],i,j;

	for(i=0;i<10;i++){
		num[i]=i;
	}
	
	printf("Ten numbers\n");
	
	for(j=0;j<10;j++){
		printf("%d\n",num[j]);	
	}
}
