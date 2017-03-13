/*Write a program to read a matrix of size m*n entered by the user 
and display its transpose matrix. Use Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int m,n,i,j;
	
	printf("Rows: ");
	scanf("%d",&m);
	printf("Columns: ");
	scanf("%d",&n);
	
	int (*matrix)[n] = malloc(sizeof(*matrix) * m );
	
	printf("\nEnter values in matrix\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nMatrix Before Transpose : \n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix after Transpose: \n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}

	
