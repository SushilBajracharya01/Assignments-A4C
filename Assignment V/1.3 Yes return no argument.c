// a program to check whether the number is divisible by 5 and 7 with yes return no argument
#include <stdio.h>


int div(){
	int num;
	scanf("%d",&num);
		if (num%5==0&&num%7==0){
			return 1;
		}
		else{
			return 0;
		}
}	

int main(){
	int dis;
	printf("Enter a number :");
	
	dis = div();
	
	if(dis==1){
		printf("It is divisible by 5 and 7");
	}
	else{ 
		printf("it is not divisible by 5 and 7");
	}	
	
	return 0;
}

	
	
