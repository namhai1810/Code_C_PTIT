#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isWhiteSpace(char c){
	return c=='\t'||c==' '||c=='\n';
}
bool isSpecialCharacter(char c){
	return c==';'||c==','||c=='!'||c=='!';
}
void checkingAndRemoving(char *c){
	int i,j;
	int length=strlen(c);
	for(i=0;i<strlen(c);i++){
		if(isWhiteSpace(c[i])&&isWhiteSpace(c[i+1])){
			for(j=i+1;j<=length;j++){
				c[j]=c[j+1];
			}
			i--;
			length--;
		}else{
			if(isWhiteSpace(c[i])&&isSpecialCharacter(c[i+1])){
				for(j=i;j<length;j++){
					c[j]=c[j+1];
				}
				i--;
				length--;
			}
		}
	}
}
int main(){
	char x[1000];
	fgets(x,999,stdin);
	checkingAndRemoving(x);
	puts(x);
}
