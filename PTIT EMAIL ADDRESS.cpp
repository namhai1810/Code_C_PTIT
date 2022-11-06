#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	fgets(str,50,stdin);
	int n=strlen(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='A'&&str[i]<='Z') str[i]=str[i]+32;
	}
	char a[50][50],k=0;
	char *token=strtok(str," \n");
	while(token!=NULL){
		strcpy(a[k++],token);
		token=strtok(NULL," \n");
	}
	for(int i=0;i<k-1;i++){
		printf("%c",a[i][0]);
	}
	printf("%s@ptit.edu.vn",a[k-1]);
	return 0;
}
