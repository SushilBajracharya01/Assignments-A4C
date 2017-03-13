// Write a program that uses pointers to copy an array of integer.

#include <stdio.h>
#include <stdlib.h>

int *copy (int *arr,int size){
	int *new_arr= malloc(sizeof(double) * size);
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
	
	int arr[size];
	
	printf("Enter values in array\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	int *new_arr = copy(arr,size);
	
	printf("Index\t\tValue\t\tAddress\n");
	
	for(i=0;i<size;i++){
    
        printf("%d\t\t%d\t\t%p\n",i,*(new_arr+i),new_arr+i);
    }
	
	return 0;

}
