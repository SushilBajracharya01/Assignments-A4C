/* a program to count number of even and odd entered by the user,
   find out their sum and display them.*/
   
#include <stdio.h>
#include <conio.h>

int main(){
	int arr[10],r,zer=0,eve=0,odd=0,esum=0,osum=0,tsum;
	
	//loop to input 10 numbers in array.
	for(r=0;r<10;r++){
		printf("Enter number : ");
		scanf("%d",&arr[r]);
	}
	
	//loop to check odd or even or zero.
	for(r=0;r<10;r++){
		if(arr[r]==0){
			zer++;
			continue;
		}
		if(arr[r]%2==0){
			eve++;
			esum+=arr[r];
		}
		else{
			odd++;
			osum+=arr[r];
		}
	}
	
	tsum=esum+osum;
	
	printf("\n ***The entered numbers : ***\n\n\t");
	
	//loop to display all the numbers in the array.
	for(r=0;r<10;r++){
		printf("%d,",arr[r]);
	}
  
	//Result Display.
	printf("\n");
	printf("\nNo. of Even : %d\n",eve);
	printf("sum of all Even : %d\n",esum);
	printf("No. of Odd : %d\n",odd);
	printf("sum of all Odd : %d\n",osum);
	printf("No. of zero : %d\n",zer);
	return 0;
}
