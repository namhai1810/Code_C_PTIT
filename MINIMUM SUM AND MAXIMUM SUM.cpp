#include<stdio.h>
long long summin(long long a){
long long re=0,i=1;
int digits;
while(a>0){
	digits=a%10;
	if(digits==6) digits=5;
	re=digits*i+re;
	i*=10;
	a/=10;
}
return re;	
}
long long summax( long long a){
long long re=0,i=1;
int digits;
while(a>0){
	digits=a%10;
	if(digits==5) digits=6;
	re=digits*i+re;
	i*=10;
	a/=10;
}
return re;	
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
long long a,b;
	for(i=0;i<n;i++){
		scanf("%lld%lld",&a,&b);
		printf("%lld ",summin(a)+summin(b));
		printf("%lld\n",summax(a)+summax(b));
		printf("\n");
	}
}

