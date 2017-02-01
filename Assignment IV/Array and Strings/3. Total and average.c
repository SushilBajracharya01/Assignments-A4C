// a program to assign 10 values in an array
#include <stdio.h>
#include <conio.h>

int main(){
	int num[10],i;
	float av,tot=0;
	
	printf("\n");
	
	for(i=0;i<10;i++){             // loop to Read 10 numbers
		printf("Enter a number: ");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++){            // loop to add the 10 numbers
		tot=tot+num[i];
	}
	
	av=(tot/10);				// average= (sum total)/totalnumber.
	
	printf("\n");
	
	printf("The total sum of the numbers is %.2f\n",tot);
	printf("The average of the number is %.2f\n", av);
	
	return 0;
}
