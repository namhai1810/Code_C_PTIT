#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define max 300
bool isWhiteSpace(char c){
	return c==' '||c=='\n'||c=='\t';
}
void tinh(char str[max]){
	int count=0,i;
		fgets(str,250,stdin);
	for(i=0;i<strlen(str);i++){
		if((isWhiteSpace(str[i])&&!isWhiteSpace(str[i+1]))||
		(!isWhiteSpace(str[i])&&!isWhiteSpace(str[i+1])&&i+1==strlen(str)-1))
		count++;
	}
	printf("%d\n",count);
}
int main(){
	int i,j,n,count;
scanf("%d",&n);
char str[max];
for(i=0;i<n;i++){
		getchar();
         tinh(str);
}
}
