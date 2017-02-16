// A program to check whether the number is palendrome or not.

#include <stdio.h>

//A function to reverse the number.
int rev(int a){
	int reverse;
	while(a!=0){
		reverse = reverse * 10;
		reverse = reverse + a%10;
		a=a/10;
	}
	return reverse;
}

int main(){
	int num;
	printf ("Enter a number : ");
	scanf("%d",&num);
	
	int n = rev(num);
	
	if (n==num){
		printf("IT is PALINDROME");
	}
	else{ 
		printf("IT is NOT a PALINDROME");
	}
	return 0;
}
