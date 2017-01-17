// A program to display whether the given number is prime or composite.
#include <stdio.h>
#include <conio.h>

int main(){
	int a,flag;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a==0){
		printf("%d is zero",a);
	}
  else if(a==1){
    printf("It is 1");
  }
	else{
	for(int i =1;i<=a;i++){
		int mod = a%i;
		if(mod==0)
		flag=flag+1;
	}
	if(flag>2){
	printf("%d is composite",a);}
	else 
	printf("%d is prime.",a);}
	return 0;
}
