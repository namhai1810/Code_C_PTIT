#include<stdio.h>
#include<string.h>
#define max 200
int main(){
	char str[max];
	int n;
	fgets(str,199,stdin);
	int so=0,kitu=0,chu=0;
	for(int i=0;i<strlen(str)-1;i++){
	if(str[i]>='0'&&str[i]<='9') so++;
	else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) chu++;
	else kitu++;
	}
	printf("%d %d %d",chu,so,kitu);
}
