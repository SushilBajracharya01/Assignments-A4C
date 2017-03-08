// A program with a function that is passed with an array of n pointers which returns the maximum. 
#include<stdio.h>
 
int max(int *parr, int n){
	int i;
	for(i=0; i<n; i++){
		if (*parr < *(parr + i)){
			*parr = *(parr+i);
		}
	}
	return *parr;
}
	
int main()
{
	int n,i,maxo;
	printf("How many numbers do you want ? :");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d numbers : \n",n);
	
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	maxo = max(arr,n);
	
	printf ("The MAXIMUM value is %d",maxo);
	
	return 0;
	
}
