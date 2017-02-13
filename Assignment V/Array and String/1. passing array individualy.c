// passing an array individually.

#include <stdio.h>

void passing(int a);

void main(){
	int i,arr[10];
	printf("\nEnter 10 numbers\n");
	for (i=0;i<10;i++){
		printf("==>");
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe 10 numbers : ");
	
	for(i=0;i<10;i++){
		passing(arr[i]);
	}
}

void passing(int a){
	printf(" %d ",a);
}
	
