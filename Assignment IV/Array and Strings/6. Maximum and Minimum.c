// A program to find the maximum and minimun value in an array.

#include <stdio.h>

int main(){
	int num[10],i,,max,min;
	
	printf("\nEnter 10 numbers \n");
	
	for(i=0;i<10;i++){
		printf("Enter a number : ");
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	
	for(i=0;i<10;i++){
		if(max<num[i]){
			max=num[i];
		}
		if(min>num[i]){
			min=num[i];
		}	
	}
	printf("The Maximun value is %d.",max);
	printf("The Mininum value is %d.",min);
}	
