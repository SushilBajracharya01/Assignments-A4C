//a program to generate particular term in Fibonacci Series

#include<stdio.h>
 
int fibo(int);
 
int main()
{
   int x,n, i = 0, c;
	printf("particular term : ");
   scanf("%d",&n);
 
   for ( c = 1 ; c <= n ; c++ )
   {
      x =fibo(i);
      i++; 
   }
   printf("\nIN FIBONACCI SERIES \n");
   printf("\t\t\t%dth term = %d\n",i,x);
 
   return 0;
}
 
int fibo(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibo(n-1) + fibo(n-2) );
} 
