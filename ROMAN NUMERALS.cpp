#include<stdio.h>
#include<string.h>
int main(){
int n,sum;
	scanf("%d\n",&n);
while(n--){
	char str[100];
	int num[100];
	sum=0;
	fgets(str,99,stdin);
	int length=strlen(str),i;
	for(i=0;i<length-1;i++){
		switch(str[i]){
			case 'I':
				num[i]=1;
				break;
			case 'V':
				num[i]=5;
				break;
			case 'X':
				num[i]=10;
				break;
			case 'L':
				num[i]=50;
				break;
			case 'C':
				num[i]=100;
				break;
			case 'D':
				num[i]=500;
				break;
			case 'M':
				num[i]=1000;
				break;
				
		}
	}
	for(i=0;i<length-2;i++){
		if(num[i]<num[i+1]) sum-=num[i];
		else sum+=num[i];
	}
	sum+= num[length-2];
	printf("%d\n",sum);
}
}
