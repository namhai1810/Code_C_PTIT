#include<stdio.h>
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long bcnn,ucln,k;
	k=a*b;
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	}
	printf("%lld\n",a);//ucln
	printf("%lld",k/a);//bcnn
}
