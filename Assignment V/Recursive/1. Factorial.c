// a Program to display given number's factorial.

#include <stdio.h>

int facto(int);

int  main() {
   int n;
   printf("\t\t: FACTORIAL :\n");
   printf("Enter a number to find its factorial : ");
   scanf("%d", &n);
   printf("Factorial of %d is %d\n", n, facto(n));
   return 0;
}

int facto(int i) {
	
   if(i <= 1) {
      return 1;
   }
   return i * facto(i - 1);
}
