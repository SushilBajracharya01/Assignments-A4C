// a program to display all the divisor of given number.

#include <stdio.h>

void divisor (int);

void main(){
	int num;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	printf("\nAll the divisor of %d are :- ",num);
	divisor(num);
	printf("\n");
}

void divisor (int n){
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf(" %d ",i);
		}
	}
}
	
