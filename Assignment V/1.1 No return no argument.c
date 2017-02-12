// a program to check whether the number is divisible by 5 and 7 with no return no argument

#include <stdio.h>

void div (){
	printf("It is Divisible by 5 and 7.");
}

void nodiv(){
	printf("It is NOT divisible by 5 and 7.");
}


int main(){
	int num;
  
	printf("Enter any number : ");
	scanf("%d",&num);
	
	if (num%5==0&&num%7==0){
		div();
	}
	else{
		nodiv();
  }
  
  return 0;
}
