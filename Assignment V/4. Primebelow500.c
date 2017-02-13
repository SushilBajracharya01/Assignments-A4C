// a program to display prime numbers below 500.

#include <stdio.h>

void prime(){
	int i,j,count;
	
	for(i=1;i<500;i++){
		count=0;
		
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		
		if(count==2){
			printf("%d\n",i);
		}
		
	}
}

void main(){
	printf("Prime NUmbers between 0 to 500\n");
	
	prime();	
}
