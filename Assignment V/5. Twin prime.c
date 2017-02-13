// a program to display twin primenumbers below 500.

#include <stdio.h>

// Display all the twin prime numbers between 0 to 500.

void twinp(int arr[],int a){
	int i;
	
  for(i=0;i<a;i++){
		if(arr[i+1]-arr[i]==2){
	     printf("\t%d\t\t%d\n",arr[i],arr[i+1]);
		}
  }

}

// Stores all the prime numbers below 500 in array pri[].
int prime(){
	int i,j,count,pri[999],me=0;
	
	for(i=1;i<500;i++){
		count=0;
		
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		
		if(count==2){
			pri[me]=i;
			me++;
		}
		
	}
  
	twinp(pri,me);                                // passing entire array(pri) and total number of array(me) to function twinp.
}

void main(){
	printf("\nTwin Prime NUmbers between 0 to 500\n");
	prime();
	printf("\t     Twin prime");
}
