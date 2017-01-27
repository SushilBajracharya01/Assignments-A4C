// a Program to merge and sort two array into one.
#include <stdio.h>
#include <conio.h>

int main(){
	
	int n,m,r,i,j=0,s,swt;
	
	printf("\nHOW many numbers do you want in your first array ?  : ");
	scanf("%d",&n);
	printf("\nHOW many numbers do you want in your second array ? : ");
	scanf("%d",&m);
	
	printf("\n");
	
	s=n+m;//there will be s numbers in third array.
	
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
	
	//2loops to sort the third array.
	for(i=0;i<s;i++){
		j=i+1;
		while(j<s){
			if(arr3[i]>arr3[j]){
				swt=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=swt;
			}
			++j;
		}
	}
  
	// loop to display the sorted third array.
	for(i=0;i<s;i++){
		printf("\t%d\n",arr3[i]);
	}
	
	return 0;
}
