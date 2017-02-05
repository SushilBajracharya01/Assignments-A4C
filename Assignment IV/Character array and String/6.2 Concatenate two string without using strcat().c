// A program to concatenate two strings without using strcat().
#include <stdio.h>
#include <string.h>

int main() {
    char f[20], s[20];

    printf("\nEnter 1st String  :");
    scanf("%s",f);
    printf("\nEnter 2nd String  :");
    scanf("%s",s);

    int i, j;

    i = strlen(f);
	
    for (j = 0; s[j] != '\0'; i++, j++) {
        f[i] = s[j];
    }
	f[i]='\0';

    printf("Concated string is :%s\n", f);
}
