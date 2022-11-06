#include<stdio.h>
int SN(long long n){
		long long i,j,sum=0,digits;
	for(i=n;i>0;i/=10){
		digits=1;
		for(j=1;j<=i%10;j++){
			digits*=j;
		}
		sum+=digits;
		
	}
	if(sum==n){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long i;
	if(a>b){
		long long tmp;
		tmp=a;
		a=b;
		b=tmp;
	}
	for(i=a;i<=b;i++){
		if(SN(i)==1){
			printf("%lld ",i);
		}
	}
}

