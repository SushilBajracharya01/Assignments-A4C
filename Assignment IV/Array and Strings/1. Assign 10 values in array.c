// a program to assign 10 values in an array

#include <stdio.h>
#include <conio.h>

int main(){

  int num[10],j,i;
	
	printf("Enter 10 number \n");
	
	for(i=0;i<10;i++){             // loop to Read 10 numbers
		printf("Enter a number: ");
		scanf("%d",&num[i]);
	}
	
	printf("The ten numbers are \n");
	
	for(j=0;j<10;j++){            // loop to Display 10 numbers
		printf("\t%d\n",num[j]);
		}
	
	return 0;
}
