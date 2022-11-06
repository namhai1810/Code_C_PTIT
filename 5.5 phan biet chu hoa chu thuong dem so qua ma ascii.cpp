#include<stdio.h>
#include<string.h>
#include<ctype.h>
void nodiffer(char *c){
	int i=0;
	char b[123]={0};
	for(i=0;i<123;i++){
		char w=tolower(c[i]);
		b[w]++;
	}
	for(i=97;i<123;i++){
		printf("%c:%d\n",(char)i,b[i]);
	}
}
void differ(char *c){
	int i=0;
	char b[123]={0};
	for(i=0;i<123;i++){
		
		b[c[i]]++;
	}
	for(i=1;i<123;i++){
		printf("%c:%d\n",(char)i,b[i]);
	}
}
int main(){
	char x[1000];
	fgets(x,999,stdin);
	printf("\n  phan biet \n");
	differ(x);
	printf("khong phan biet:\n");
	nodiffer(x);
	
	
	
	
	
}
