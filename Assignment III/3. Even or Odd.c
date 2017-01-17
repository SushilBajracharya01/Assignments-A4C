// A program to display whether the number is even or odd.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;
    int mod;
    printf("enter a number : ");
    scanf ("%d",&a);
    mod = a%2 ;
    if (a==0){
            printf("it is zero");
    }
    	else if(mod==0){
        	  printf("it is even");
		}
        else {
            printf("it is odd");
    }
    return 0;
}
