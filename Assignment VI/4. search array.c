/*a program with function that uses pointers to search for the address of a
 given integer in a given array. If the given integer is found,
 the function returns its address; otherwise it returns NULL.
*/
#include <stdio.h>

int *search (int *parr , int tar, int n){
	int i;
	for ( i=0;i<n;i++){
		if (*(parr + i) == tar){
			return (parr + i);
		}
	} 
	return NULL;
}
	
int main(){
	int i,n,tar;
	
	printf("Array Size :");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d numbers in the array :\n",n);
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Whose address do you want ? : ");
	scanf("%d",&tar);
	
	printf("The address of %d is %u.",tar,search(arr,tar,n));
	
	return 0;
}
	
