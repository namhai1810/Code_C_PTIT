#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
bool isWhiteSpace(char c){
	return c==' '||c=='!'||c=='\t'||c=='\n'||c=='\0';
}
void reverse(char *c){
	int i,j; 
	int begin=0;
	int length=0;
	for(i=0;i<=strlen(c);i++){
		if(!isWhiteSpace(c[i])){
			length++;
			begin=i-length;
		}else{
			for(j=begin+length;j>begin;j--){
				printf("%c",c[j]);
				length=0;
				
			}
			printf(" ");
		}
		
	}
	
}


int main(){
    char x[1000];
	printf("Nhap ho-dem-ten:");
	fgets(x,999,stdin);
	char c[1000];
	strcpy(c,x);
	strrev(c);
	printf("ten dem ho:");
	reverse(c);
	

}
