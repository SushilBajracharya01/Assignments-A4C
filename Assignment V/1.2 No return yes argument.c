// a program to check whether the number is divisible by 5 and 7 with no return yes argument

#include <stdio.h>

void div (int num){
	if (num%5==0&&num%7==0){
		printf("It is Divisible by 5 and 7.");
	}
	else{
		printf("It is NOT Divisible by 5 and 7.");
	}
}


int main(){
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	div(num);

	return 0;
}
