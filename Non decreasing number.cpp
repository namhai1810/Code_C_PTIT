#include<stdio.h>
int main(){
	long long n;
	long long arr[10];
	scanf("%lld",&n);
	int mark;
	long long digit1,digit2;
	int i,j;
	for(i=0;i<n;i++){
		mark=1;
		scanf("%lld",&arr[i]);
		while(arr[i]!=0){
		digit1=0;
		digit2=0;
			digit1=arr[i]%10;
			arr[i]/=10;
			digit2=arr[i]%10;
		if(digit2>digit1){
			mark=0;
			break;
		}
		}
		if(mark==1){
			printf("YES\n");
		}else{
		printf("NO\n");
		}
		
		
	}
}
