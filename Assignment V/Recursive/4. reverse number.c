//display the reverse number using Recursion

#include <stdio.h>

int reverse (int n);

int mod=0,rev=0;
int main(){
	int num,reversed;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	printf("The reversed number of %d is %d",num,reverse(num));
	return 0;
	
}

int reverse (int n){
	
	mod=n%10;
	rev=rev*10+mod;
	n=n/10;
	
	if(n==0){
		return rev;
	}
	else{
		reverse(n);
	}
}
