#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isWhiteSpace(char c){
	if(c==' '||c=='\t'){
		return true;
	}else {return false;
	}
}
int countDigit(char *arr){
	int count =0;
	int size=strlen(arr);// strlen (const char)
	int i;
	for(i=0;i<size-1;i++){
		if(!isWhiteSpace(arr[i])&&isWhiteSpace(arr[i+1])||!isWhiteSpace(arr[i])&&!isWhiteSpace(arr[i+1])&&i+1==size-1){
			count++;
		}
	}
	return count;
}
int main(){
	char input[2000];
	fgets(input,1999,stdin);// tuong tu scanf
	int count=countDigit(input);
	printf("So tu cua cau tren la :%d",count);
}
