//Write a program to sort 'n' numbers in ascending order using dynamic memory.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p,i,j,swt;
	printf("How many numbers do you want to enter ?\n---> ");
	scanf("%d",&n);
	
	p = (int *)malloc(n*sizeof(int));
	
	printf("Enter numbers :");
	for (i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	
	for (i=0;i<n;i++){
		j=i+1;
		for(j;j<n;j++){
			if(*(p+i)>*(p+j)){
				swt = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = swt;
			}
		}
	}
	printf("Sorted in ascending order: ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	
	return 0;
}
