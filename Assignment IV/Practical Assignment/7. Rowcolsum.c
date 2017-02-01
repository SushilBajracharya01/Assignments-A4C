// A program to take input M*N from user and find a row sum and column sum.
#include <stdio.h>
#include <conio.h>

int main (){
	int r,c,i,j,sum=0;
	
	printf("Row size : ");
	scanf("%d",&r);
	printf("Column size : ");
	scanf("%d",&c);
	
	printf("\n");
	int f[r][c];
	
	printf("Enter values in the matrix.\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("[%d] [%d] : ",i,j);
			scanf("%d",&f[i][j]);
		}
	}
	
	printf("\n");
	// 2loops to print the entered matrix.
	for(i=0;i<r;i++){
		printf("\t");
		for(j=0;j<c;j++){
			printf("%d\t",f[i][j]);
		}
		printf("\n");
	}
	// 2loops to add row elements.
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum=sum+f[i][j];
		}
		printf("The sum of row %d is %d.\n",i+1,sum);
		sum=0;
	}
	
    sum = 0;
    // 2loops to add column elements.
	for (j = 0; j < c; ++j){
        for (i = 0; i < r; ++i){
            sum = sum + f[i][j];
        }
        printf("The sum of column %d is = %d\n",j+1, sum);
        sum = 0;
    }
}
