//find the sum of Natural number up to 10 using recursion.
#include <stdio.h>

int sum ();

int add=0;				//Global Variables
int count=0;
	
int main(){
	
	printf("THE sum of natural number upto 10 is %d ",sum());
	
	return 0;
}

int sum(){
	++count;
	add+=count;
	if(count<10){
		sum();
	}
	else{
		return add;
	}
}
