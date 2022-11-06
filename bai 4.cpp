#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	long long a,digits,sum;
	for(i=0;i<n;i++){
		sum=0;
		scanf("%lld",&a);
		while(a>0){
			digits=a%10;
			sum+=digits;
			a/=10;
		}
		printf("%lld\n",sum);
	}
}
