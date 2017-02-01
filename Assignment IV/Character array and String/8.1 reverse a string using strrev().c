#include <stdio.h>
#include <string.h>

int main()
{	 
	char name[30] = "a string";
	
  printf("a string before reverse : %s\n",name);
	printf("a string after reverse : %s",strrev(name));
	
  return 0;
}
