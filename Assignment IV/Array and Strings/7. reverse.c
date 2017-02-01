//A program to input any 5 elements in an array and print them in reverse order.

#include <stdio.h>

int main (){
	int i,j,num[5];
	
	printf("\n");
	
	for(i=0;i<5;i++){
		printf("Enter number:");
		scanf("%d",&num[i]);
	}
	
	printf("\n---------\n");
	
	for(i=0;i<5;i++){       		// initial value of i is 0.					      
		printf("\nnum[%d]= %d\n",i,num[i]);
	}								// loop breaks when i value is equal to 5. 
	
	printf("\nThe reverse order:\n");
	
	for(--i;i>=0;i--){				// initial value of i is 5-1=4.
		printf("\nnum[%d]= %d\n",i,num[i]);
	}
	return 0;
}
