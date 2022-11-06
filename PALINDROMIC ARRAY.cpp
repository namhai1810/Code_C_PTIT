#include<stdio.h>
#define max 100
void palin(long long n, long long arr[max]){
	int i,mark=1;
	for(i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	for(i=0;i<=n/2&&n!=0;i++){
		if(arr[i]!=arr[n-i-1]){
			mark=0;
			break;
		}
	}
	if(mark==1) {
	printf("YES\n");}
	else {
	printf("NO\n");
}
}
int main(){
	long long arr[max],n,k,i,j;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&k);
		palin(k,arr);
	}
	
	
}
