#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int i=0;
	char x[1000];
	char c;
	fgets(x,999,stdin);
 int size=strlen(x);
 printf("xau viet hoa la: \n");
 for(i=0;i<size;i++){
 	printf("%c",toupper(x[i]));
 }
 fgets(x,999,stdin);
 printf("xau viet thuong la:\n");
  for(i=0;i<size;i++){
 	printf("%c",tolower(x[i]));
 }
} 
