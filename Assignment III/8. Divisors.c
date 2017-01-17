// A program to display all the divisor of the given number.
#include <stdio.h>
#include <conio.h>

int main (){
	int n;
	printf("Enter a number : ");
	scanf ("%d",&n);
	int a = 1;
	int mod = 0;
	printf("The divisor of the number %d are",n);
	do{
		mod=n%a;
		if (mod == 0){
		printf("\n%d",a);
		a= a+1 ;}
		else
		a=a+1;
	}while(a<=n);
	return 0;
}
