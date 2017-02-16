// a program to find whether the given number is prime or not using function.

#include <stdio.h>

int check(int a){
	int i,mod,count;
	for(i=2;i<a/2;i++){
		mod=a%i;
		if(mod==0){
			count=1;
			break;
		}
	}
	return count;
}
	
	
void main(){
	int num,che;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num<2){
		printf("IT is neither prime nor composite");
	}
	else{
		che=check(num);
		
		if(che==1){
			printf("IT is NOT prime");
		}
		else{ 
			printf("IT is PRIME");
		}
	}
}
