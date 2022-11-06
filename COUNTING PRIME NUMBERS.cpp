#include<stdio.h>
#include<math.h>
long long snt(long long n){
	long long i,mark=1;
	if(n==0) return 0;
	if(n==1) {
	return 0;
}
	if(n==2) {
	return 1;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			mark=0;
			break;
		}
	}
	if(mark==1){
		return 1;
	}
	else{
	return 0;
	}
}
long long digit(long long n){
	long long digits,mark=1;
	while(n>0){
	
		if(snt(n%10)==0){
			mark=0;
			break;
		}
		n/=10;
	}
	if(mark==1){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
long long n;
	scanf("%lld",&n);
	long long i,j,count;
	long long a,b;
	for(i=0;i<n;i++){
		count=0;
		scanf("%lld%lld",&a,&b);
		for(j=a;j<=b;j++){
			if(snt(j)==1&&digit(j)==1){
			count++;
			}
		}
		printf("%lld\n",count);
	}
}
