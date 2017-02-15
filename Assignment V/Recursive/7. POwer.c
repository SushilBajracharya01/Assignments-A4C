//A Program in C to ask a number and Power to be calculated for that number.
#include <stdio.h>

int count=1;

int power(int a,int b,int c){
	a = a * c;
	count++;
	
	if(count<b){
		power(a,b,c);
	}
	else{
		return a;
	}
}
	
	
int main(){
	int x,y;
	printf("\t\t X^Y=Z");
	
	printf("\nEnter value of X : ");
	scanf("%d",&x);
	printf("Enter value of Y : ");
	scanf("%d",&y);
	
	printf("\t\t %d ^ %d = %d ",x,y,power(x,y,x));
	return 0;
}
