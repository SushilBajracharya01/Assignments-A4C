// a program to read n numbers and rearrange the numbers in reverse order

#include<stdio.h>
#include <conio.h>

int main (){
	
  int num[],numb,arV,Vra;
	
  printf("How many numbers do you want to enter ? ");
	scanf("%d",&numb);
	
  printf("Enter %d numbers : \n",numb);
	
  printf("\n");
	
  for(arV=0;arV<numb;arV++){             			
		printf("Enter a number :");					
		scanf("%d",&num[arV]);
	}
	
  printf("\n");
	
  for(Vra=arV-1;Vra>=0;Vra--){
		printf("%d\t",num[Vra]);
	}
  
  return 0;
  }
