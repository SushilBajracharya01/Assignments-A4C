// a program to check whether the number is divisible by 5 and 7 with yes return yes argument

#include <stdio.h>

int div(int num){
	if (num%5==0&&num%7==0){
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	int num,dis;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	dis = div(num);
	
	if (dis == 1){
		printf("It is divisible by 5 and 7");
	}
	else{
		printf("It is NOT divisible by 5 and 7");
	}
  
  return 0;
}

	
