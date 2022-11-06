#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isWhiteSpace(char c){
	return c==' '||c=='\t'||c=='\n';
}
bool isSpecialCharacter(char c){
	return c=='!'||c=='.'||c==','||c==';';
}
void addSpace(char *c){
	int i,j;
	int length=strlen(c);
	for(i=0;i<length;i++){
		if(isSpecialCharacter(c[i])&&!isWhiteSpace(c[i+1])){
			for(j=length;j>=i+1;j--){
				c[j]=c[j-1];
			}
			c[i+1]=' ';
		
		}
	}
	
}
int main(){
	char x[1000];
	fgets(x,999,stdin);
	addSpace(x);
	printf("\n%s",x);
}
