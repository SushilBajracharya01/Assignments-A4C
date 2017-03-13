// Write a program that uses pointers to copy an array of double.

#include <stdio.h>
#include <stdlib.h>

double *copy (double *arr,int size){
	double *new_arr= malloc(sizeof(double) * size);
	int i;
	for(i=0;i<size;i++){
		new_arr[i] = arr[i];
	}
	return new_arr;
}	

int main(){
	int size,i;
	
	printf("Array Size :");
	scanf("%d",&size);
	
	double arr[size];
	
	printf("Enter values in array\n");
	for(i=0;i<size;i++){
		scanf("%lf",&arr[i]);
	}
	
	double *new_arr = copy(arr,size);
	
  printf("Index\t\tValue\t\tAddress\n");
  
	for(i=0;i<size;i++){
    
        printf("%d\t\t%.2f\t\t%p\n",i,*(new_arr+i),new_arr+i);
    }
    
    return 0;

}
	
	
	
	
