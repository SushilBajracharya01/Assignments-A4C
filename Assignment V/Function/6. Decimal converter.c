// a program to convert decimal number into binary.

#include <stdio.h>

void Convert(int anyNum){
	int sum=0,mul = 1,mod;
	int div = anyNum;
	
	do{
		mod=div%2;
		div=div/2;
		sum=sum+mod*mul;
		mul=mul*10;
	}while(div>0);
	
	printf("The binary number for %d is %d",anyNum,sum);
}

void main(){
	int anyNum;
	printf("Enter a decimal number : ");
	scanf("%d",&anyNum);

	Convert(anyNum);
}
