//find transpose of a matrix.

#include <stdio.h>
#include <conio.h>

int main (){
	int n,m,r,c;
	
	//No. of Rows and Columns.
	printf("Rows : ");
	scanf("%d",&n);
	printf("Columns : ");
	scanf("%d",&m);
	
	int arr[n][m];
	
	//2loops to read values for the matrix.
	for(r=0;r<n;r++){
		for(c=0;c<m;c++){
			printf("Enter value for [ %d %d ] : ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	
	//print the matrix
	printf("\nYour Matrix : \n");
	for(r=0;r<n;r++){
		for(c=0;c<m;c++){
			printf("\t%d\t",arr[r][c]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of your matrix :\n");
	
	//Transpose 
	for(c=0;c<m;c++){
		for(r=0;r<n;r++){
			printf("\t%d\t",arr[r][c]);
		}
		printf("\n");
	}
	
	return 0;
	}
