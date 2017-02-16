/*a function Power that computes X raised to 
	the power Y for integer X and Y 
	and return double type value.*/

#include <stdio.h>

int power(int,int);
int i;

int main(){
	printf("\n\t\tx^y=z\n\n");
	int x,y;
	
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	
	printf("Enter value of y : " );
	scanf("%d",&y);
	
	double ans = power(x,y);
	printf("\n\t\t%d^%d = %.2f\n",x,y,ans);
}

int power(int num, int pow){
	int X=num;
	for(i=1;i<pow;i++){
		X=X*num;
	}
	return X;
}
