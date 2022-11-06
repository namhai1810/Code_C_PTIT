#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
bool isWhiteSpace(char c){
return c==' '||c=='\t'||c=='\n';
}
void remove(char *c){
	int size= strlen(c);
	int i=size-1; 
while(isWhiteSpace(c[i])){
	c[i]='\0';
	i--;
}
}
int main(){
	char x[1000];
	fgets(x,999,stdin);
	int before=strlen(x);
	remove(x);
	int after=strlen(x);
	printf("before removing =%d\n after removing =%d.",before,after);
	return 0;
}
