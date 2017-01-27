// Merge two array into 1.
#include <stdio.h>
#include <conio.h>

int main(){
	
	int n,m,r,i,j=0,s;
	
	printf("\nHOW many numbers do you want in your first array ?  : ");
	scanf("%d",&n);
	printf("\nHOW many numbers do you want in your second array ? : ");
	scanf("%d",&m);
	
	printf("\n");
	
	s=n+m;    //s is total number stored in third array. 
	
	int arr1[n],arr2[m],arr3[s];
	
	// 2loops to read numbers into 2 array.
	for(r=0;r<n;r++){
		printf("Enter number in array1 : ");
		scanf("%d",&arr1[r]);
	}
	
	printf("\n");
	
	for(r=0;r<m;r++){
		printf("Enter number in array2 : ");
		scanf("%d",&arr2[r]);
	}
	
	// 2loops to merge 2arrays into 1.
	for(i=0;i<n;i++){
		arr3[i]=arr1[i];
	}
	for(i;i<s;i++){
		arr3[i]=arr2[j];
		++j;
	}
	
	// loop to display the third array.
	for(i=0;i<s;i++){
		printf("\t%d\n",arr3[i]);
	}
	
	return 0;
}
