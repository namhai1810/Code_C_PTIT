#include<stdbool.h>
#include<stdio.h>
#include<string.h>
bool isWhiteSpace(char c){
	return c==' '||c=='\t'||c=='\n';
}
void timVT(char *c,int *length,int *start){
	int begin=0;	
	int lenMax=0;
	int leng=0;
	int i;
	for(i=0;i<=strlen(c);i++){
	if(isWhiteSpace(c[i])){
		if(leng>*length){
		  *length=leng;
			*start=begin;
		}
		leng=0;
}
	else{
		begin=i-leng;
		leng++;
	}
	}
	
	
}
void xuat(char *c,int *length,int *start){
	int i;
	printf("\n");
	for(i=*start;i<(*start+*length);i++){
		printf("%c",c[i]);
		
	}
	printf("\n");
	printf(" Vi tri bat dau %c.Do dai %d",c[*start],*length);
	
}

int main(){
	char x[1000];
	fgets(x,999,stdin);//doc ca cai xuong dong
	int length=0;
	int start=0;
timVT(x,&length,&start);
	xuat(x,&length,&start);
}





















