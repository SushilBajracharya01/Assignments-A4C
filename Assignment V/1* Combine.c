// a program to check whether the number is divisible by 5 and 7 with no return yes argument

#include <stdio.h>

int num; // Global variable.

  
// NO Return NO Argument. CASE 1.
void div (){
	printf("It is Divisible by 5 and 7.");
} 

void nodiv(){
	printf("It is NOT divisible by 5 and 7.");
}

//NO Return YES Argument. CASE 2.
void di (int num){
	if (num%5==0&&num%7==0){
		printf("It is Divisible by 5 and 7.");
	}
	else{
		printf("It is NOT Divisible by 5 and 7.");
	}
}

//YES Return NO  Argument. CASE 3.
int d(){
	scanf("%d",&num);
	if (num%5==0&&num%7==0){
		return 1;
	}
	else{
		return 0;
	}
}
//YES Return YES Argument. CASE 4.
int divi(int n){
	if (n%5==0&&n%7==0){
		return 1;
	}
	else{
		return 0;
	}
}

int loop(){
	int cho;
	printf("\nTo check whether the number is divisible by 5 and 7 Using :\n");
	printf("Press 1 :: NO  Return NO  Argument \nPress 2 :: NO  Return YES Argument \nPress 3 :: YES Return NO  Argument \nPress 4 :: YES Return YES Argument\n==>");
	scanf("%d",&cho);
	
	
	switch (cho){
		case 1:
			printf("Enter any number : ");
			scanf("%d",&num);
			
			if (num%5==0&&num%7==0){
				div();
			}
			else{
				nodiv();
			}
			break;
		
		case 2:
			printf("Enter any number : ");
			scanf("%d",&num);
			
			di(num);
			break;

		case 3:
			printf("Enter a number :");
	
			if(d()==1){
				printf("It is divisible by 5 and 7");
			}
			else{ 
				printf("it is not divisible by 5 and 7");
			}
			break;
		
		case 4:
			printf("Enter number : ");
			scanf("%d",&num);
			
			if (divi(num) == 1){
				printf("It is divisible by 5 and 7");
			}
			else{
				printf("It is NOT divisible by 5 and 7");
			}
			break;
		default:
			printf("********INVALID INPUT*********\n\tTRY AGAIN\n");
			break;
	}
	
	}

int main()
{
	loop();
	char ans;
	printf("\n\nTo TRY AGAIN press 'y' : ");
	scanf(" %c", &ans);
	if(ans=='y'){
		main();
	}
	else{
		printf("THANK YOU ! HAVE A NICE DAY ");
	}
	
}

