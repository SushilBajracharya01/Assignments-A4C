/* A Program to take the string using gets(), and pass to the function to find and
   return number of words, whitespace in that string.*/ 

#include <stdio.h>
#include <string.h>

int space(char a[123]){
    int i,count = 0,spac=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]==' '){
            count++;
            if(a[i+1]!='\0'){
                spac=count+1;
            }
        }
    }
    printf("No. of words : %d\n",spac);
    return count;
    }
   
   

int main(){
    char str[121];
   
    printf("Enter a string : ");
    gets(str);
       
    printf("No. of spaces :%d", space(str));
}
