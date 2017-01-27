// a program to remove dublicate values in array
#include <stdio.h>
#include <conio.h>

int main (){
	
  int nu,r,i,j,flag;
	
	printf("How many numbers do you want to enter ? : ");
	scanf("%d",&nu);
	
	int arr[nu];
	
	//loop to read number 
	for(r=0;r<nu;r++){           
		printf("Enter a number : ");
		scanf("%d",&arr[r]);
	}
	
	//loop to compare and display
	for(i=0;i<nu;++i){
		flag=0;
		j=i+1;
		while(j<nu){
			if(arr[i]==arr[j]){
				flag=1;
				break;
				}
			else{
				++j;
			}
			}
		if(flag!=1){
			printf("%d",arr[i]);	
		}
	}
}	
