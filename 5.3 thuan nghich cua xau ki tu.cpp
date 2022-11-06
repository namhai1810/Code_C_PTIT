#include<stdio.h>
#include<string.h>
#include<stdbool.h>	
#include<stdlib.h>
int isRevert(char *c){
	char x[10];
	strcpy(x,c);// ham coppy xau
	strrev(c);//ham dao nguoc xau
	 return strcmp(x,c)==0;// ham so sanh
	
	
}
int main(){
	int i;
	char x[10];
	for(i=100000000;i<=999999999;i++){
		ltoa(i,x,10);
		if(isRevert(x)){
			printf("%5d", i);
		}
	}
	return 0;
}
