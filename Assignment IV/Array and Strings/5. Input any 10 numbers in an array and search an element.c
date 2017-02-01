//A program to input any 10 numbers in an array and search an element.

#include<stdio.h>

int main(){
	int num[10],i,ftn,count;
	
	for(i=0;i<10;i++){
		printf("Enter a number : ");
		scanf("%d",&num[i]);
	}
	
	printf("\nFind this number : ");
	scanf("%d",&ftn);
	
	for(i=0;i<10;i++){
		if(ftn==num[i]){
			count=1;
			printf("\nThe number %d is stored in array number %d(num[%d])\n",ftn,i,i);
		}
	}
	if(count!=1){
		printf("\t\t\tERROR 404 \n \tWoops, looks like the number doesn't exists.\n");
	}
}
	
