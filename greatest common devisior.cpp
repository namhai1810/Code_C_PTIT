#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	long long a,b;
	for(i=0;i<n;i++){
	scanf("%lld%lld",&a,&b);
		while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	}
	printf("%lld\n",a);
		}
		}
