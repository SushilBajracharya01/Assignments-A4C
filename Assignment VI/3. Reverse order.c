/* Write a function that is passed an array of n pointers to floats 
and returns a newly created array that contains
 those n float values in reverse order. */

#include <stdio.h>
#include <stdlib.h>

float * returnArray(float *arr, int size) {
    float *new_arr = malloc(sizeof(float) * size);
    for(int i = size-1,j=0;i>=0; i--,j++) {
        new_arr[j] = arr[i];
    }
    return new_arr;
}

int main() {
    int size;
	printf("Array Size: \t");
    scanf("%d",&size);

    float arr[size];
	
	printf("Enter values: \n");
	
    for(int i=0;i<size;i++){
        scanf("%f",&arr[i]);
    }
	
    printf("THE REVERSE ORDER IS:\n");
    printf("index\t\tvalue\t\taddress\n");

    float *new_arr = returnArray(arr, size);

	for(int i=0;i<size;i++){
    
        printf("%d\t\t%.3f\t\t%p\n",i,*(new_arr+i),new_arr+i);
    }
    
    free(new_arr);
	return 0;

}
