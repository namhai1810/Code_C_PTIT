#include<stdio.h>
#include<math.h>
int snt(long long n){
	long long i,mark=1;
	if(n==2) return 1;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			mark=0;
			break;
		}
	}
	if(mark==1){
		return 1;
	}else{return 0;
	}
}
long long reverse(long long a){
 long long n=a;
 long long re=0;
 while(a>0){
 	re=re*10+a%10;
 	a/=10;
 }
 if(re==n){
 	return re;
 }else{
 	return 0;
 }
}
long long pretty(long long n){
	int digits, mark=0,sum=0;
	while(n>0){
		digits=n%10;
		if(digits==6){
			mark=1;
		}
		sum+=digits;
	}
	if(mark==6&&sum==8){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	long long i,j,count;
	long long a,b;
		scanf("%lld%lld",&a,&b);
		for(j=a;j<=b;j++){
			if(snt(j)==1&&reverse(j)!=0&&pretty(j)==1){
				printf("%lld ",j);
				
			}
		}
	}

