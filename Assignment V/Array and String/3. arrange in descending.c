//a program in c to input any 10 number in an array and sort them in descending order using function.

#include <stdio.h>

void passing(int all[]);

int i;

void main(){
	int arr[10];
	printf("Enter 10 numbers :");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	passing(arr);
	
}

void passing(int all[]){
	int swt,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(all[i]>all[j]){
				swt=all[i];
				all[i]=all[j];
				all[j]=swt;
			}
		}
	}
	printf("Arranging in descending order : ");
	for(i=0;i<10;i++){
		printf("%d ",all[i]);
	}
}

