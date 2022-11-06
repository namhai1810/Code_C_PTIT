#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	long long dau,cuoi;
	long long arr[10];
	for(i=0;i<n;i++){
	scanf("%lld",&arr[i]);
	cuoi=arr[i]%10;
	while(arr[i]!=0){
		dau=0;
		dau=arr[i]%10;
		arr[i]/=10;
	}
	if(dau==cuoi){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	}
}
