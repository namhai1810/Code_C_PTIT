#include<stdio.h>
int ucln(long long a,long long b){
	while(a!=b){
		if(a>b){
		a-=b;
		}else{
		b-=a;
		}
	}
	return a;
}
int main(){
	long long a ,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n",ucln(a,b));
	printf("%lld",(a*b)/ucln(a,b));
	
}
