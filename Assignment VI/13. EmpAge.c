/*
Write a program to read number of employees,n, working in a company.
Reserve the memory required to store age of n employees
using malloc() function. Read age of n employees from user
and count the number of employees of age above 80 years.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	int n,*age,i,count=0;
	printf("No. of employees: ");
	scanf("%d",&n);
	
	age = (int *)malloc(n*sizeof(int));
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("Emp Age: ");
		scanf("%d",(age+i));
		
		if(*(age+i)>80){
			count++;
		}
	}
	printf("\nNo. of employees of age greater than 80 is %d",count);
	
	return 0;
}

	
