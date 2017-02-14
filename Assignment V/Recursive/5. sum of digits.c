//find the sum of digits entered by the user.

#include <stdio.h>
int add=0;
int sum (int a);
int main(){
	int a,b;
	
	printf("Enter a digit :");
	scanf("%d",&a);
	
	printf("THE sum of digits is %d ",sum(a));
}

int sum(int a){
	int mod,div;
	mod=a%10;
	a=a/10;
	add=add+mod;
	if(a!=0){
		sum(a);
	}
	else{
		return add;
	}
}
	
